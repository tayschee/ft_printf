/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbigot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 14:27:58 by tbigot            #+#    #+#             */
/*   Updated: 2019/11/15 15:33:37 by tbigot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	first_flag(char *txt, const char *conversion, t_flist *flags)
{
	int i;

	i = 0;
	if (txt && txt[0] == '0')
		flags->zero_before = ft_atoi(&txt[i]);
	else if (txt && txt[0] > '0' && txt[0] <= '9')
		flags->space_before = ft_atoi(&txt[i]);
	while (txt && txt[i] && txt[i] >= '0' && txt[i] <= '9')
		i++;
	while (txt && txt[i] && (check_conversion(txt[i], conversion)))
	{
		if (txt && txt[i] == '-')
			flags->space_after = ft_atoi(&txt[++i]);
		else if (txt && txt[i] == '.')
		{
			flags->precision = ft_atoi(&txt[++i]);
			if (txt && txt[i] == '-')
				i++;
		}
		else
			break ;
		while (txt && txt[i] && txt[i] >= '0' && txt[i] <= '9')
			i++;
	}
}

static char	*create_part(char *s1, char *s2)
{
	char *result;

	result = ft_strjoin(s1, s2);
	if (s1)
		free(s1);
	free(s2);
	return (result);
}

const char	*check_flags(const char *txt, va_list va, const char *conversion,
t_flist *flags)
{
	int		i;
	int		j;
	char	*complete;
	char	*new_result;

	i = 0;
	new_result = NULL;
	while (txt && txt[i] && check_conversion(txt[i], conversion))
	{
		j = i;
		while (txt[i] && check_conversion(txt[i], conversion) && txt[i] != '*')
			i++;
		complete = ft_strldup(&txt[j], i - j);
		if (txt[i] == '\0')
			break ;
		if (txt[i] == '*')
		{
			i++;
			complete = create_part(complete, ft_itoa(va_arg(va, int)));
		}
		new_result = create_part(new_result, complete);
	}
	first_flag(new_result, conversion, flags);
	free(new_result);
	return (&txt[i]);
}

void		last_modif(t_flist *flags, int size)
{
	if (flags->precision >= 0 && flags->c != '%' && flags->c != 's')
	{
		flags->space_before += flags->zero_before;
		flags->zero_before = 0;
	}
	if (flags->zero_before >= size)
		flags->zero_before = flags->zero_before - size;
	else
		flags->zero_before = 0;
	if (flags->space_before >= size)
		flags->space_before = flags->space_before - size;
	else
		flags->space_before = 0;
	if (flags->space_after >= size)
		flags->space_after = flags->space_after - size;
	else
		flags->space_after = 0;
}
