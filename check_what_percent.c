/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_what_%.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbigot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 14:57:55 by tbigot            #+#    #+#             */
/*   Updated: 2019/11/15 15:08:00 by tbigot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*percent_p(char *adress)
{
	char *adresscomplete;

	adresscomplete = ft_strjoin("0x", adress);
	free(adress);
	return (adresscomplete);
}

static char	*char_to_string(char c)
{
	char *str;

	if (!(str = ft_calloc(2, sizeof(char))))
		return (NULL);
	str[0] = c;
	return (str);
}

const char	*check_what_percent(const char *txt, va_list va, t_flist *flags)
{
	txt = check_flags(++txt, va, "cspdiuxX%", flags);
	flags->c = *txt;
	if (*txt == '%')
		str_and_flags(flags, char_to_string('%'));
	else if (*txt == 'i' || *txt == 'd')
		str_and_flags(flags, ft_itoa(va_arg(va, int)));
	else if (*txt == 's')
		str_and_flags(flags, ft_strdup(va_arg(va, char *)));
	else if (*txt == 'x')
		str_and_flags(flags, ft_utoa_base(va_arg(va, int), "0123456789abcdef"));
	else if (*txt == 'X')
		str_and_flags(flags, ft_utoa_base(va_arg(va, int), "0123456789ABCDEF"));
	else if (*txt == 'p')
		str_and_flags(flags, percent_p(ft_ultoa_base(
		(unsigned long)(va_arg(va, void *)), "0123456789abcdef")));
	else if (*txt == 'c')
		str_and_flags(flags, char_to_string(va_arg(va, int)));
	else if (*txt == 'u')
		str_and_flags(flags, ft_utoa(va_arg(va, unsigned int)));
	return (++txt);
}
