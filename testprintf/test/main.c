/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcraipea <mcraipea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 11:37:58 by mcraipea          #+#    #+#             */
/*   Updated: 2019/11/19 16:19:27 by tbigot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "c.c"
#include "s.c"
#include "p.c"
#include "id.c"
#include "u.c"
#include "x.c"
#include "xx.c"

//void	test_p();
//void	test_c();
//void	test_id();
///void	test_s();
//void	test_u();
//void	test_x();
//void	test_xx();

int		main(void)
{
	test_p();
	test_s();
	test_c();
	//test_id();
	//test_u();
	//test_x();
	//test_xx();
	return (0);
}
