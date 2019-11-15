/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   excep.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbigot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 15:49:33 by tbigot            #+#    #+#             */
/*   Updated: 2019/11/15 16:06:31 by tbigot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	excep(char *to_print, t_flist *f)
{
	int i;
	int size_to;
	int size;

	i = 0;
	size_to = ft_strlen(to_print);
	size = f->space_before + f->space_after + f->zero_before + size_to;
	if (size_to < size)
	{
		while (i < f->space_after)
		{
			write(1, " ", 1);
			i++;
		}
	}
}
