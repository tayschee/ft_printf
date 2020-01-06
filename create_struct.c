/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_struct.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbigot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 17:38:03 by tbigot            #+#    #+#             */
/*   Updated: 2019/11/18 15:52:31 by tbigot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_flist	*initialise_flags(t_flist *f)
{
	if (!(f = malloc(sizeof(t_flist))))
		return (NULL);
	f->precision = -1;
	f->c = 'a';
	f->space_after = 0;
	f->space_before = 0;
	f->zero_before = 0;
	f->move = NULL;
	f->size = 0;
	return (f);
}

void	reset_flags(t_flist *f)
{
	f->precision = -1;
	f->c = 'a';
	f->space_after = 0;
	f->space_before = 0;
	f->zero_before = 0;
}
