/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbigot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 17:30:59 by tbigot            #+#    #+#             */
/*   Updated: 2019/11/19 17:04:23 by tbigot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../verifprintf/ft_printf.h"
#define R "\x1b[31m"
#define G "\x1b[32m"
#define B "\x1b[36m"
#define S "\x1b[0m"

int		main()
{
	int i;
	int j;

	i = 0;
	j = 0;


	ft_printf("/////////////////CHECK NORMAL TEST/////////////////////\n\n");

	i = printf("Vrai : c-> %c\n", '8');
	j = ft_printf("Faux : c-> %c\n", '8');
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : c-> %c\n", 128);
	j = ft_printf("Faux : c-> %c\n", 128);
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : c-> %c\n", 127);
	j = ft_printf("Faux : c-> %c\n", 127);
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("%c <-c Vrai\n", 38);
	j = ft_printf("%c <-c Faux\n", 38);
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : d-> %d\n", 0);
	j = ft_printf("Faux : d-> %d\n", 0);
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : i-> %i\n", ' ');
	j = ft_printf("Faux : i-> %i\n", ' ');
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : x-> %x\n", 0);
	j = ft_printf("Faux : x-> %x\n", 0);
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : X-> %X\n", 16);
	j = ft_printf("Faux : X-> %X\n", 16);
	if (i != j)
		printf("PAS DE CHANCE %d != %d\n\n", i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : p-> %p\n", "a");
	j = ft_printf("Faux : p-> %p\n", "a");
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : %% -> %%\n");
	j = ft_printf("Faux : %% -> %%\n");
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : s-> %s\n", "hello");
	j = ft_printf("Faux : s-> %s\n", "hello");
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : u-> %u\n", 2147483647);
	j = ft_printf("Faux : u-> %u\n", 2147483647);
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	// FIN DE VAGUE
	// FIN
	// FIN
	//
	//
	
	ft_printf(S"//////////////////////////////Plusieurs %%///////////////////////////\n\n");
	i = printf("Vrai : c-> %c d-> %d\n", '8', 8);
	j = ft_printf("Faux : c-> %c d-> %d\n", '8', 8);
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : d-> %d s-> %s\n", 8, "niketalope");
	j = ft_printf("Faux : d-> %d s-> %s\n", 8, "niketalope");
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : i-> %i X-> %X\n", ' ', ' ');
	j = ft_printf("Faux : i-> %i X-> %X\n", ' ', ' ');
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : x-> %x X-> %X\n", 14, 14);
	j = ft_printf("Faux : x-> %x X-> %X\n", 14, 14);
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : X-> %X p-> %p s-> %s c-> %c %%-> %% i-> %i\n", 16, "ah", "ah", 'a', 5);
	j = ft_printf("Faux : X-> %X p-> %p s-> %s c-> %c %%-> %% i-> %i\n", 16, "ah", "ah", 'a', 5);
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : p-> %p abcdefghijk\n", "a");
	j = ft_printf("Faux : p-> %p abcdefghijk\n", "a");
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("%s = Vrai : %% -> %% x-> %x\n", "VRAI", 42);
	j = ft_printf("%s = Faux : %% -> %% x-> %x\n", "FAUX", 42);
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("%s = Vrai : s-> %s txt random\n", "VRAI", "hello");
	j = ft_printf("%s = Faux : s-> %s txt random\n", "FAUX", "hello");
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : u-> %u", 2147483647);
		printf("\n");
	j = ft_printf("Faux : u-> %u", 2147483647);
		ft_printf("\n");
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	// FIN DE VAGUE
	// FIN
	// FIN
	//
	//
	ft_printf("/////////////////CHECK * TEST/////////////////////\n\n");

	i = printf("Vrai : c-> %*c\n", 12, '8');
	j = ft_printf("Faux : c-> %*c\n", 12, '8');
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : d-> %*d\n", 0, 8);
	j = ft_printf("Faux : d-> %*d\n", 0, 8);
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : i-> %*i\n", -5, ' ');
	j = ft_printf("Faux : i-> %*i\n", -5, ' ');
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : x-> %*x\n", -0, 14);
	j = ft_printf("Faux : x-> %*x\n", -0, 14);
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : X-> %*X\n", 25, 16);
	j = ft_printf("Faux : X-> %*X\n", 25, 16);
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : p-> %*p\n", 1, "a");
	j = ft_printf("Faux : p-> %*p\n", 1, "a");
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : %% -> %*%\n", -4);
	j = ft_printf("Faux : %% -> %*%\n", -4);
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : s-> %*s\n", 6, "hello");
	j = ft_printf("Faux : s-> %*s\n", 6, "hello");
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : u-> %*u\n", 01000, 2147483647);
	j = ft_printf("Faux : u-> %*u\n", 01000, 2147483647);
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	// FIN DE VAGUE
	// FIN
	// FIN
	//
	//
	ft_printf("/////////////////CHECK - TEST/////////////////////\n\n");

	i = printf("Vrai : c-> %-5c\n", 42);
	j = ft_printf("Faux : c-> %-5c\n", 42);
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : d-> %-2d\n", 800);
	j = ft_printf("Faux : d-> %-2d\n", 800);
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : i-> %*i\n", -20, ' ');
	j = ft_printf("Faux : i-> %*i\n", -20, ' ');
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : x-> %-1x\n", 140);
	j = ft_printf("Faux : x-> %-1x\n", 140);
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : X-> %*X\n", -25, 16);
	j = ft_printf("Faux : X-> %*X\n", -25, 16);
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : p-> %-*p\n", 1000, "a");
	j = ft_printf("Faux : p-> %-*p\n", 1000, "a");
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : %% -> %-1%\n");
	j = ft_printf("Faux : %% -> %-1%\n");
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : s-> %-0s\n", "hello"); //ignore
	j = ft_printf("Faux : s-> %-0s\n", "hello");
	if (i != j)
		printf(B"NO SEG  %d != %d\n\n"S, i, j);
	else
		printf(B"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : u-> %-15u\n", 2147483647);
	j = ft_printf("Faux : u-> %-15u\n", 2147483647);
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	// FIN DE VAGUE
	// FIN
	// FIN
	//
	//
	ft_printf("/////////////////CHECK 0 TEST/////////////////////\n\n");

	i = printf("Vrai : c-> %012c\n", '8');//ignore
	j = ft_printf("Faux : c-> %012c\n", '8');
	if (i != j)
		printf(B"NO SEG %d != %d\n\n"S, i, j);
	else
		printf(B"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : d-> %d00\n", 8);
	j = ft_printf("Faux : d-> %d00\n", 8);
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : i-> %015i\n", ' ');
	j = ft_printf("Faux : i-> %015i\n", ' ');
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : x-> %01x\n", 14);
	j = ft_printf("Faux : x-> %01x\n", 14);
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : X-> %01X\n", 16);
	j = ft_printf("Faux : X-> %01X\n", 16);
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : p-> %0154p\n", "a"); // ignore
	j = ft_printf("Faux : p-> %0154p\n", "a");
	if (i != j)
		printf(B"NO SEG %d != %d\n\n"S, i, j);
	else
		printf(B"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : %% -> %061%\n");
	j = ft_printf("Faux : %% -> %061%\n");
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : s-> %02s\n", "hello"); //ignore
	j = ft_printf("Faux : s-> %02s\n", "hello");
	if (i != j)
		printf(B"NO SEG %d != %d\n\n"S, i, j);
	else
		printf(B"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : u-> %017u\n", 2147483647);
	j = ft_printf("Faux : u-> %017u\n", 2147483647);
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	// FIN DE VAGUE
	// FIN
	// FIN
	//
	//
	ft_printf("/////////////////CHECK . TEST/////////////////////\n\n");

	i = printf("Vrai : c-> %.2d\n", 8);
	j = ft_printf("Faux : c-> %.2d\n", 8);
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : d-> %.0000d\n", 0);
	j = ft_printf("Faux : d-> %.0000d\n", 0);
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : i-> %.0i\n", ' ');
	j = ft_printf("Faux : i-> %.0i\n", ' ');
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : x-> %.4x\n", 14);
	j = ft_printf("Faux : x-> %.4x\n", 14);
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : X-> %.1X\n", 16);
	j = ft_printf("Faux : X-> %.1X\n", 16);
	if (i != j)
		printf("PAS DE CHANCE %d != %d\n\n", i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : s-> %.154s\n", "a"); 
	j = ft_printf("Faux : s-> %.154s\n", "a");
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : %% -> %.2%\n");
	j = ft_printf("Faux : %% -> %.2%\n");
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : s-> %.0s\n", "hello");
	j = ft_printf("Faux : s-> %.0s\n", "hello");
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : s-> %.7s\n", "hello");
	j = ft_printf("Faux : s-> %.7s\n", "hello");
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : s-> %.5s\n", "hello");
	j = ft_printf("Faux : s-> %.57s\n", "hello");
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : u-> %.5u\n", 2147483647);
	j = ft_printf("Faux : u-> %.5u\n", 2147483647);
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	// FIN DE VAGUE
	// FIN
	// FIN
	//
	//
	ft_printf("/////////////////CHECK 12 TEST/////////////////////\n\n");

	i = printf("Vrai : c-> %12d\n", 8);
	j = ft_printf("Faux : c-> %12d\n", 8);
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : d-> %1d\n", 8);
	j = ft_printf("Faux : d-> %1d\n", 8);
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : i-> %*i\n", 011, ' ');
	j = ft_printf("Faux : i-> %*i\n", 011, ' ');
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : x-> %4x\n", 14);
	j = ft_printf("Faux : x-> %4x\n", 14);
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : X-> %1X\n", 16);
	j = ft_printf("Faux : X-> %1X\n", 16);
	if (i != j)
		printf("PAS DE CHANCE %d != %d\n\n", i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : p-> %17p\n", "a"); 
	j = ft_printf("Faux : p-> %17p\n", "a");
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : %% -> %2%\n");
	j = ft_printf("Faux : %% -> %2%\n");
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : s-> %1s\n", "hello");
	j = ft_printf("Faux : s-> %1s\n", "hello");
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : s-> %18s\n", "2147483647");
	j = ft_printf("Faux : s-> %18s\n", "2147483647");
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	// FIN DE VAGUE
	// FIN
	// FIN
	//
	//
	ft_printf("/////////////////CHECK 12. TEST/////////////////////\n\n");

	i = printf("Vrai : c-> %12.d\n", 8);
	j = ft_printf("Faux : c-> %12.d\n", 8);
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : d-> %1.3d\n", 8);
	j = ft_printf("Faux : d-> %1.3d\n", 8);
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : i-> %*.7i\n", 011, ' ');
	j = ft_printf("Faux : i-> %*.7i\n", 011, ' ');
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : x-> %4.2x\n", 14);
	j = ft_printf("Faux : x-> %4.2x\n", 14);
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : X-> %2.1X\n", 16);
	j = ft_printf("Faux : X-> %2.1X\n", 16);
	if (i != j)
		printf("PAS DE CHANCE %d != %d\n\n", i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : p-> %17.4p\n", "a"); //non 
	j = ft_printf("Faux : p-> %17.4p\n", "a");
	if (i != j)
		printf(B"NO SEG %d != %d\n\n"S, i, j);
	else
		printf(B"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : %% -> %4.8%\n");
	j = ft_printf("Faux : %% -> %4.8%\n");
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : s-> %1.0s\n", "hello");
	j = ft_printf("Faux : s-> %1.0s\n", "hello");
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : s-> %18.15s\n", "2147483647");
	j = ft_printf("Faux : s-> %18.15s\n", "2147483647");
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	// FIN DE VAGUE
	// FIN
	// FIN
	//
	//
	ft_printf("/////////////////CHECK -. TEST/////////////////////\n\n");

	i = printf("Vrai : c-> %-15.d\n", 8);
	j = ft_printf("Faux : c-> %-15.d\n", 8);
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : d-> %-2.3d\n", 8);
	j = ft_printf("Faux : d-> %-2.3d\n", 8);
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : i-> %-4.2i\n", -1);
	j = ft_printf("Faux : i-> %-4.2i\n", -1);
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : x-> %-0.1x\n", 14);//indetermine
	j = ft_printf("Faux : x-> %-0.1x\n", 14);
	if (i != j)
		printf(B"NO SEG %d != %d\n"S, i, j);//je me suis arrete la
	else
		printf(B"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : X-> |%-10.0X|\n", 0);
	j = ft_printf("Faux : X-> |%-10.0X|\n", 0);
	if (i != j)
		printf("PAS DE CHANCE %d != %d\n\n", i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : p-> %-8.4p\n", "a"); //indetermine
	j = ft_printf("Faux : p-> %-8.4p\n", "a");
	if (i != j)
		printf(B"NO SEG %d != %d\n\n"S, i, j);
	else
		printf(B"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : %% -> %-2.8%\n");
	j = ft_printf("Faux : %% -> %-2.8%\n");
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : s-> %-51.7s\n", "hello");
	j = ft_printf("Faux : s-> %-51.7s\n", "hello");
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : s-> %-3.12s\n", "2147483647");
	j = ft_printf("Faux : s-> %-3.12s\n", "2147483647");
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	// FIN DE VAGUE
	// FIN
	// FIN
	//
	//
	ft_printf("/////////////////CHECK 0./////////////////////\n\n");

	i = printf("Vrai : c-> %07.d\n", 8);
	j = ft_printf("Faux : c-> %07.d\n", 8);
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : d-> %02.3d\n", 8);
	j = ft_printf("Faux : d-> %02.3d\n", 8);
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : i-> %03.0i\n", 0);
	j = ft_printf("Faux : i-> %03.0i\n", 0);
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : x-> %0.1x\n", 14);//indetermine
	j = ft_printf("Faux : x-> %0.1x\n", 14);
	if (i != j)
		printf(B"NO SEG %d != %d\n"S, i, j);
	else
		printf(B"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : X-> %010.0X\n", 16);
	j = ft_printf("Faux : X-> %010.0X\n", 16);
	if (i != j)
		printf("PAS DE CHANCE %d != %d\n\n", i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : p-> %08.4p\n", "a"); //indetermine
	j = ft_printf("Faux : p-> %08.4p\n", "a");
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : %% -> %02.8%\n");
	j = ft_printf("Faux : %% -> %02.8%\n");
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : s-> %051.7s\n", "hello");//indetermine
	j = ft_printf("Faux : s-> %051.7s\n", "hello");
	if (i != j)
		printf(B"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(B"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : s-> %03.12s\n", "2147483647");//indetermine
	j = ft_printf("Faux : s-> %03.12s\n", "2147483647");
	if (i != j)
		printf(B"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(B"GG %d == %d\n\n"S, i, j);

	// FIN DE VAGUE
	// FIN
	// FIN
	//
	//
	//
	ft_printf("/////////////////CHECK Multiflags/////////////////////\n\n");

	i = printf("Vrai : c-> %*-7.15c\n", 12, '8');//indetermine
	j = ft_printf("Faux : c-> %c\n", '8');
	if (i != j)
		printf(B"NO SEG %d != %d\n\n"S, i, j);
	else
		printf(B"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : d-> %*-7.15d\n", 12, 8); //indet
	j = ft_printf("Faux : d-> %d\n", 8);
	if (i != j)
		printf(B"NO SEG %d != %d\n\n"S, i, j);
	else
		printf(B"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : i-> %-7.*i\n", 5, ' ');
	j = ft_printf("Faux : i-> %-7.*i\n", 5, ' ');
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : x-> %012-15x\n", 14); //INDET
	j = ft_printf("Faux : x-> %012-15x\n", 14);
	if (i != j)
		printf(B"NO SEG %d != %d\n"S, i, j);
	else
		printf(B"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : X-> %12-15X\n", 16); //INDET
	j = ft_printf("Faux : X-> %12-15X\n", 16);
	if (i != j)
		printf(B"NO SEG %d != %d\n\n", i, j);
	else
		printf(B"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : p-> %*-15p\n", 15, "a");//INDET
	j = ft_printf("Faux : p-> %-15p\n", 15, "a");
	if (i != j)
		printf(B"NO SEG %d != %d\n\n"S, i, j);
	else
		printf(B"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : %% -> %*-5%\n", 3);//INDET
	j = ft_printf("Faux : %% -> %*-%\n", 3);
	if (i != j)
		printf(B"NO SEG %d != %d\n\n"S, i, j);
	else
		printf(B"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : s-> %*-9s\n", 15, "hello"); //INDET
	j = ft_printf("Faux : s-> %*-9s\n", 15, "hello");
	if (i != j)
		printf(B"NO SEG %d != %d\n\n"S, i, j);
	else
		printf(B"NO SEG %d == %d\n\n"S, i, j);

	i = printf("Vrai : u-> %15-13u\n", 2147483647); //INDET
	j = ft_printf("Faux : u-> %15-13u\n", 2147483647);
	if (i != j)
		printf(B"NO SEG %d != %d\n\n"S, i, j);
	else
		printf(B"GG %d == %d\n\n"S, i, j);

	// FIN DE VAGUE
	// FIN
	// FIN
	//
	//
	ft_printf("/////////////////GO SEGFAULT/////////////////////\n\n");

	i = printf("Vrai : c-> %c\n", NULL);//indetermine
	j = ft_printf("Faux : c-> %c\n", NULL);
	if (i != j)
		printf(B"NO SEG %d != %d\n\n"S, i, j);
	else
		printf(B"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : d-> %d\n", NULL); //indet
	j = ft_printf("Faux : d-> %d\n", NULL);
	if (i != j)
		printf(B"NO SEG %d != %d\n\n"S, i, j);
	else
		printf(B"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : i-> %", 5, ' '); //indet
	j = ft_printf("Faux : i-> %", 5, ' ');
	if (i != j)
		printf(B"NO SEG %d != %d\n\n"S, i, j);
	else
		printf(B"GG %d == %d\n\n"S, i, j);

/*	i = printf("Vrai : x-> %***d %d\n", 15 , 14 , 13); //indet
	j = ft_printf("Faux : x-> %***d %d\n", 15, 14, 13); //indet
	if (i != j)
		printf(B"NO INFINITE WHILE + NO SEG %d != %d\n"S, i, j);
	else
		printf(B"GG %d == %d\n\n"S, i, j);
*/
/*	i = printf("Vrai : X-> %s\n", 16);
	j = ft_printf("Faux : X-> %s\n", 16);
	if (i != j)
		printf(B"NO SEG %d != %d\n\n"S, i, j); //SEGFAULT
	else
		printf(B"GG %d == %d\n\n"S, i, j);*/

	i = printf("Vrai : p-> %15p\n", NULL);
	j = ft_printf("Faux : p-> %15p\n", NULL);
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : %% -> %d %d %d\n", 3); //indet
	j = ft_printf("Faux : %% -> %d %d %d\n", 3);
	if (i != j)
		printf(B"NO SEG %d != %d\n\n"S, i, j);
	else
		printf(B"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : s-> %.3s\n", NULL);
	j = ft_printf("Faux : s-> %.3s\n", NULL);
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);
	i = printf("Vrai : s-> %-52 test je sais pas quoi");
	printf("\n");
	j = ft_printf("Faux : s-> %-52 test je sais pas quoi");
	ft_printf("\n");
	if (i != j)
		printf(B"PROBABLEMENT PAS A GERER %d != %d\n\n"S, i, j);
	else
		printf(B"GG %d == %d\n\n"S, i, j);

	// FIN DE VAGUE
	// FIN
	// FIN
	//
	//
	ft_printf("/////////////////CHECK NEG TEST/////////////////////\n\n");

	i = printf("Vrai : c-> %*d\n", -20, 1);
	j = ft_printf("Faux : c-> %*d\n", -20, 1);
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : d-> %*.3d\n", -8, 12);
	j = ft_printf("Faux : d-> %*.3d\n", -8, 12);
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : i-> %04.3i\n", -11);
	j = ft_printf("Faux : i-> %04.3i\n", -11);
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : x-> %7.*x\n", -5, 14);//indetermine
	j = ft_printf("Faux : x-> %7.*x\n", -5, 14);
	if (i != j)
		printf(B"NO SEG %d != %d\n"S, i, j);
	else
		printf(B"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : X-> %-10.0X\n", -16);
	j = ft_printf("Faux : X-> %-10.0X\n", -16);
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : p-> %-8.*p\n", -6, "a"); //indetermine
	j = ft_printf("Faux : p-> %-8.*p\n", -6, "a");
	if (i != j)
		printf(B"NO SEG %d != %d\n\n"S, i, j);
	else
		printf(B"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : %% -> %-2.*%\n", -6);
	j = ft_printf("Faux : %% -> %-2.*%\n", -6);
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : s-> %*.*s\n", -7, -5, "hello");
	j = ft_printf("Faux : s-> %*.*s\n", -7, -5, "hello");
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : s-> %*.*s\n", -4, -7, "2147483647");
	j = ft_printf("Faux : s-> %*.*s\n",-4, -7, "2147483647");
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	ft_printf("/////////////////CHECK %%C no printable/////////////////////\n\n");

	i = printf("Vrai : c-> |%c|\n", 0);
	j = ft_printf("Faux : c-> |%c|\n", 0);
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : c-> |%*c|\n", 8, 0);
	j = ft_printf("Faux : c-> |%*c|\n", 8, 0);
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : c-> |%-5c|\n", 0);
	j = ft_printf("Faux : c-> |%-5c|\n", 0);
	if (i != j)
		printf(R"PAS DE CHANCE %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : c-> |%.4c|\n", 16);//indet
	j = ft_printf("Faux : c-> |%.4c|\n", 16);
	if (i != j)
		printf(B"NO SEG %d != %d\n\n"S, i, j);
	else
		printf(B"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : c-> %3-8c\n", 8); //indetermine
	j = ft_printf("Faux : c-> %3-8c\n", 8);
	if (i != j)
		printf(B"NO SEG %d != %d\n\n"S, i, j);
	else
		printf(B"GG %d == %d\n\n"S, i, j);

	ft_printf("/////////////////test que je passe pas/////////////////////////");

	i = printf("Vrai : %s%d%%%p%X%d%d%d","bonjour", 12, "a", 150, 42, 42, 42);
	printf("\n");
	j = ft_printf("Faux : %s%d%%%p%X%d%d%d","bonjour", 12, "a", 150, 42 , 42, 42);
	ft_printf("\n");
	if (i != j)
		printf(R"FAUX %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);

	i = printf("Vrai : %15.4d", -42);
	j = ft_printf("Faux : %15.4d", -42);
	if (i != j)
		printf(R"FAUX %d != %d\n\n"S, i, j);
	else
		printf(G"GG %d == %d\n\n"S, i, j);
	
	i = printf("Vrai : {%*3d}", 5, 0);
	j = ft_printf("Faux : {%*3d}", 5, 0);
	if (i != j)
		printf(B"NO SEG %d != %d\n\n"S, i, j);
	else
		printf(B"GG %d == %d\n\n"S, i, j);
	while(1);
}
