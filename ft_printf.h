/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbigot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 16:29:49 by tbigot            #+#    #+#             */
/*   Updated: 2019/11/19 15:52:04 by tbigot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "./libft/libft.h"

typedef struct	s_flist
{
	int			zero_before;
	int			space_before;
	int			space_after;
	int			precision;
	char		c;
	const char	*move;
	int			size;
}				t_flist;

int				ft_printf(const char *txt, ...);
int				check_conversion(char txt, const char *conversion);
const char		*check_what_percent(const char *txt, va_list va,
				t_flist *flags);
const char		*check_flags(const char *txt, va_list va,
				const char *conversion, t_flist *flags);
void			str_and_flags(t_flist *flags, char *print);
void			last_modif(t_flist *flags, int size);
t_flist			*initialise_flags(t_flist *f);
void			reset_flags(t_flist *f);
void			excep(char *print, t_flist *f);
void			neg_excep(char *to_print, t_flist *f);

#endif
