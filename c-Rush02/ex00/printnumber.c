/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printnumber.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canjugun <canjugun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 20:58:33 by canjugun          #+#    #+#             */
/*   Updated: 2020/10/25 21:09:02 by canjugun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		print3(char *str, char **tab, int x)
{
	if (str[0] != '0')
	{	
		printchar(str[x], tab);
		write(1, " ", 1);
		print("100", tab);
		if (str[2] != '0' || str[1] != '0')
			write(1, " ", 1);
	}
	x++;
	return (x);
}

void	print_centaine(char *str, char **tab)
{
	int x;
	int y;

	x = 0;
	y = ft_strlen(str);
	char temp[3];
	if (y == 3)
		x = print3(str, tab, x);
	if (ft_strlen(str) > 1 && str[x] != '0')
	{
		if ((y == 2 ? print(str, tab) : print(str + 1, tab)) == -1)
		{
			temp[0] = str[x];
			temp[1] = '0';
			temp[2] = 0;
			print(temp, tab);
			write(1, " ", 1);
		}
		else
			return ;
	}
	if (str[y - 1] != '0')
		printchar(str[y - 1], tab);
}

void	print_number(char *str, char **tab)
{
	int i;
	int x;
	int y;

	i = ft_strlen(str);
	x = i;
	y = 0;
	if(i > 36)
		i = undecillion(str, tab, i, y);
	y = x - i;
	if ( i == 34 || i == 35 || i == 36)
		i = decillion(str, tab, i, y);
	y = x - i;
	if (i == 31 || i == 32 || i == 33)
		i = nonillion(str, tab, i, y);
	y = x - i;
	if (i == 28 || i == 29 || i == 30)
		i = octillion(str, tab, i, y);
	y = x - i;
	if (i == 25 || i == 26 || i == 27)
		i = septillion(str, tab, i, y);
	y = x - i;
	if (i == 22 || i == 23 || i == 24)
		i = sextillion(str, tab, i, y);
	y = x - i;
	if (i == 19 || i == 20 || i == 21)
		i = quintillion(str, tab, i, y);
	y = x - i;
	if (i == 16 || i == 17 || i == 18 )
		i = quadrillion(str, tab, i, y);
	y = x - i;
	print_numbersuite(str, tab, i, y);	
}

void	print_numbersuite(char *str, char **tab, int i, int y)
{
	int x;
	
	x = ft_strlen(str);
	if (i == 13 || i == 14 || i == 15)
		i = trillion(str, tab, i, y);
	y = x - i;
	if (i == 10 || i == 11 || i == 12)
		i = billion(str, tab, i, y);
	y = x - i;
	if (i == 7 || i == 8 || i == 9)
		i = million(str, tab, i, y);
	y = x - i;
	if (i == 6 || i == 5 || i == 4)
		i = thousand(str, tab, i, y);
	y = x - i;
	if (i < 4)
		final(str, tab, i, y);
}
