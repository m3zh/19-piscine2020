/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prefixe1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canjugun <canjugun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 18:28:08 by canjugun          #+#    #+#             */
/*   Updated: 2020/10/25 22:10:22 by canjugun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int			undecillion(char *str, char **tab, int i, int y)
{
	int		x;
	char	temp[4];

	x = 0;
	if (i == 37 || i == 38)
	{
		while (i == 37 ? x < 2 : x < 3)
			temp[x++] = str[y++];
		temp[x] = 0;
		i -= x - 1;
	}
	else
	{
		temp[x++] = str[y++];
		temp[x] = 0;
		i -= 1;
	}
	if (temp[0] != '0' || temp[1] != '0' || temp[2] != '0')
	{
		print_centaine(temp, tab);
		write(1, " ", 1);
		print("1000000000000000000000000000000000000", tab);
		write(1, " ", 1);
	}
	return (i);
}

int			decillion(char *str, char **tab, int i, int y)
{
	int		x;
	char	temp[4];

	x = 0;
	if (i == 35 || i == 36)
	{
		while (i == 35 ? x < 2 : x < 3)
			temp[x++] = str[y++];
		temp[x] = 0;
		i -= x - 1;
	}
	else
	{
		temp[x++] = str[y++];
		temp[x] = 0;
		i -= 1;
	}
	if (temp[0] != '0' || temp[1] != '0' || temp[2] != '0')
	{
		print_centaine(temp, tab);
		write(1, " ", 1);
		print("10000000000000000000000000000000", tab);
		write(1, " ", 1);
	}
	return (i);
}
		
int			nonillion(char *str, char **tab, int i, int y)	
{
	int 	x; 
	char 	temp[4];

	x = 0;
	if (i == 32 || i == 33)
	{
		while (i == 32 ? x < 2 : x < 3)
			temp[x++] = str[y++];
		temp[x] = 0;
		i -= x - 1;
	}
	else
	{
		temp[x++] = str[y++];
		temp[x] = 0;	
		i -= 1;
	}
	if (temp[0] != '0' || temp[1] != '0' || temp[2] != '0')
	{
		print_centaine(temp, tab);
		write(1, " ", 1);
		print("100000000000000000000000000000", tab);
		write(1, " ", 1);
	}
	return (i);
}
	
	
	
int			octillion(char *str, char **tab, int i, int y)
{	
	int 	x;
	char 	temp[4];

	x = 0;
	if (i == 29 || i == 30)
	{
		while (i == 29 ? x < 2 : x < 3)
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
		print("1000000000000000000000000000", tab);
		write(1, " ", 1);
	}
	return (i);
}
	
int			septillion(char *str, char **tab, int i, int y)
{	
	int 	x;
	char 	temp[4];

	x = 0;
	if (i == 26 || i == 27)
	{	
		while (i == 26 ? x < 2 : x < 3)
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
		print("1000000000000000000000000", tab);
		write(1, " ", 1);
	}
	return (i);
}
