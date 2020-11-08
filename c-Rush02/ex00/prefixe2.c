/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prefixe2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canjugun <canjugun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 18:28:15 by canjugun          #+#    #+#             */
/*   Updated: 2020/10/25 21:41:39 by canjugun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		sextillion(char *str, char **tab, int i, int y)
{
	int x;
	char temp[4];

	x = 0;
	if (i == 23 || i == 24)
	{	
		while (i == 23 ? x < 2 : x < 3)
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
		print("1000000000000000000000", tab);
		write(1, " ", 1);
	}
	return (i);	
}
	
int		quintillion(char *str, char **tab, int i, int y)	
{
	int x;
	char temp[4];

	x = 0;
	if (i == 20 || i == 21)
	{	
		while (i == 20 ? x < 2 : x < 3)
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
		print("1000000000000000000", tab);
		write(1, " ", 1);
	}
	return (i);
}
	
int		quadrillion(char *str, char **tab, int i, int y)
{
	int x; 
	char temp[4];

	x = 0;
	if (i == 17 || i == 18)
	{	
		while (i == 17 ? x < 2 : x < 3)
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
		print("1000000000000000", tab);
		write(1, " ", 1);
	}
	return (i);
}

int		trillion(char *str, char **tab, int i, int y)
{
	int x;
	char temp[4];

	x = 0;
	if (i == 14 || i == 15)
	{	
		while (i == 14 ? x < 2 : x < 3)
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
		print("1000000000000", tab);
		write(1, " ", 1);
	}
	return (i);
}

int		billion(char *str, char **tab, int i, int y)
{
	int x;
	char temp[4];

	x = 0;
	if (i == 11 || i == 12)
	{
		while (i == 11 ? x < 2 : x < 3)
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
		print("1000000000", tab);
		write(1, " ", 1);
	}
	return(i);
}