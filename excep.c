/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   excep.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbigot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 15:49:33 by tbigot            #+#    #+#             */
/*   Updated: 2019/11/19 16:14:52 by tbigot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	neg_excep(char *to_print, t_flist *f)
{
	int c;
	int i;

	i = 0;
	c = -1;
	if (!to_print)
		return ;
	if (f->c == 'd' || f->c == 'i')
	{
		while (to_print[i] && to_print[i] != '-')
		{
			if (c == -1 && to_print[i] == '0')
				c = i;
			i++;
		}
		if (to_print[i] == '-' && c != -1)
		{
			to_print[c] = '-';
			to_print[i] = '0';
		}
	}
}

void	excep(char *to_print, t_flist *f)
{
	int i;
	int size_to;
	int size;

	i = 0;
	if (f->c == 'c')
	{
		size_to = ft_strlen(to_print);
		size = f->space_before + f->space_after + f->zero_before + 1;
		if (size_to < size)
		{
			ft_putchar_fd('\0', 1);
			while (i < f->space_after && size_to < size)
			{
				ft_putchar_fd(' ', 1);
				i++;
			}
		}
	}
}
