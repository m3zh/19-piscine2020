/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prefixefinal.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canjugun <canjugun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 18:45:45 by canjugun          #+#    #+#             */
/*   Updated: 2020/10/25 21:44:27 by canjugun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		million(char *str, char **tab, int i, int y)
{
	int x;
	char temp[4];

	x = 0;
	if (i == 8 || i == 9)
	{	
		while (i == 8 ? x < 2 : x < 3)
			temp[x++] = str[y++];
		temp[x] = 0;
		i -= x - 1;
	}
	else
		temp[x++] = str[y++];
		temp[x] = 0;	
		i -= 1;
	if (temp[0] != '0' || temp[1] != '0' || temp[2] != '0')
	{
		print_centaine(temp, tab);
		write(1, " ", 1);
		print("1000000", tab);
		write(1, " ", 1);
	}
	return(i);
}
	
int		thousand(char *str, char **tab, int i, int y)
{
	int x;
	char temp[4];

	x = 0;
	if (i == 6 || i == 5)
	{	
		while (i == 5 ? x < 2 : x < 3)
			temp[x++] = str[y++];
		temp[x] = 0;	
		i -= x - 1;
	}
	else 
		temp[x++] = str[y++];
		temp[x] = 0;	
		i -= 1;
	if (temp[0] != '0' || temp[1] != '0' || temp[2] != '0')
	{
		print_centaine(temp, tab);
		write(1, " ", 1);
		print("1000", tab);
		write(1, " ", 1);
	}
	return(i);
}

int		final(char *str, char **tab, int i, int y)
{
	int x;
	char temp[4];

	x = 0;
	if (i == 3 || i == 2)
	{	
		while (i == 2 ? x < 2 : x < 3)
			temp[x++] = str[y++];
		temp[x] = 0;	
		i -= x - 1;
	}
	else 
		temp[x++] = str[y++];
		temp[x] = 0;	
		i -= 1;
	print_centaine(temp, tab);
	return(i);
}