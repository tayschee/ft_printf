/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbigot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 11:17:55 by tbigot            #+#    #+#             */
/*   Updated: 2019/11/15 13:07:29 by tbigot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int					check_conversion(char txt, const char *conversion)
{
	int		i;

	i = 0;
	while (conversion[i])
	{
		if (txt == conversion[i])
			return (0);
		i++;
	}
	return (1);
}

static int			how_many_percent(const char *txt, char c)
{
	int	i;
	int	j;
	int count;

	i = 0;
	count = 0;
	while (txt[i])
	{
		j = 1;
		if (txt[i] == c)
		{
			while (txt[i + j] && ((txt[i + j] >= '0' && txt[i + j] <= '9')
			|| !(check_conversion(txt[i + j], "-0.*")))
			&& (check_conversion(txt[i + j], "cdiuxXsp%")))
				j++;
			if (!check_conversion(txt[i + j], "csdiuxXp%"))
				count++;
			else if (txt[i + j] != '%')
				return (0);
			i += j;
		}
		i++;
	}
	return (count);
}

static const char	*write_no_percent(const char *txt, char c, t_flist *flags)
{
	int		i;

	i = 0;
	while (txt && txt[i] && txt[i] != c)
		i++;
	write(1, txt, i);
	flags->size += i;
	flags->move = &txt[i];
	return (flags->move);
}

int					ft_printf(const char *txt, ...)
{
	struct s_flist	*flags;
	int				i;
	va_list			va;

	flags = NULL;
	i = how_many_percent(txt, '%');
	va_start(va, txt);
	flags = initialise_flags(flags);
	txt = write_no_percent(txt, '%', flags);
	while (i--)
	{
		txt = check_what_percent(txt, va, flags);
		reset_flags(flags);
		txt = write_no_percent(txt, '%', flags);
	}
	va_end(va);
	free(flags);
	return (flags->size);
}
