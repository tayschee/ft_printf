/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_and_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbigot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 12:12:41 by tbigot            #+#    #+#             */
/*   Updated: 2019/11/15 16:05:49 by tbigot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char		*sign_neg(t_flist *flags, char *print, int i)
{
	char *complete;
	char *tmp;

	if (print && *print == '-')
		flags->precision++;
	if (!(complete = ft_calloc(flags->precision + 1, sizeof(char))))
		return (NULL);
	tmp = complete;
	if (*print == '-')
	{
		*complete++ = '-';
		print++;
	}
	ft_memset(complete, '0', flags->precision - i);
	ft_strlcat(complete, print, flags->precision + 1);
	return (tmp);
}

static char		*complete_print(t_flist *flags, char *print, int size,
int size_print)
{
	char	*to_print;
	int		i;

	i = 0;
	if (!(to_print = ft_calloc((size + 1), sizeof(char))))
		return (NULL);
	ft_memset(&to_print[i], ' ', flags->space_before);
	i += flags->space_before;
	ft_memset(&to_print[i], '0', flags->zero_before);
	i += flags->zero_before;
	ft_strlcpy(&to_print[i], print, size_print + 1);
	i += size_print;
	ft_memset(&to_print[i], ' ', flags->space_after);
	return (to_print);
}

static char		*precision_first(t_flist *flags, char *print)
{
	int		i;
	char	*complete;

	i = ft_strlen(print);
	if (flags->c == 's' && flags->precision < i && flags->precision != -1)
		complete = ft_substr(print, 0, flags->precision);
	else if (flags->c != 's' && flags->c != '%'
	&& flags->precision > i && flags->precision != -1)
		complete = sign_neg(flags, print, i);
	else
		return (print);
	free(print);
	return (complete);
}

static char		*modify_size(t_flist *flags, char *print)
{
	int		exception;
	int		size_print;
	int		size;
	char	*to_print;

	if (!print)
		print = ft_strjoin(print, "(null)");
	print = precision_first(flags, print);
	size_print = ft_strlen(print);
	if (size_print == 0 && flags->c == 'c')
		size_print = 1;
	last_modif(flags, size_print);
	size = size_print + flags->space_after + flags->space_before
	+ flags->zero_before;
	flags->size += size;
	if (size <= size_print)
		return (print);
	else
	{
		to_print = complete_print(flags, print, size, size_print);
		free(print);
		return (to_print);
	}
}

void			str_and_flags(t_flist *flags, char *print)
{
	char *to_print;

	to_print = modify_size(flags, print);
	ft_putstr_fd(to_print, 1);
	excep(to_print, flags);
	free(to_print);
}
