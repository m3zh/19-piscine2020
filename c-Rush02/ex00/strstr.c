/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canjugun <canjugun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 17:35:36 by canjugun          #+#    #+#             */
/*   Updated: 2020/10/25 14:39:41 by cllequen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*ft_strstr(char **str, char *to_find)
{
	int		i;
	int		j;
	int		x;

	i = 0;
	j = 0;
	x = 0;
	while (str[x])
	{
		i = 0;
		while (str[x][i] != 0)
		{
			j = 0;
			while (to_find[j] == str[x][i + j])
			{
				if (to_find[j + 1] == 0)
					return (str[x]);
				j++;
			}
			i++;
		}
		x++;
	}
	return (0);
}

int		print(char *str, char **tab)
{
	char	*print;
	int		i;

	i = 0;
	print = ft_strstr(tab, str);
	if (print == NULL)
		return (-1);
	while (print[i])
	{
		while ((print[i] >= '0' && print[i] <= '9') || print[i] == ' ' ||
				print[i] == ':')
			i++;
		write(1, &print[i], 1);
		i++;
	}
	return (0);
}

char	*ft_strchar(char **str, char to_find)
{
	int		i;
	int		j;
	int		x;

	i = 0;
	j = 0;
	x = 0;
	while (str[x])
	{
		i = 0;
		while (str[x][i] != 0)
		{
			j = 0;
			while (to_find == str[x][i + j])
			{
				return (str[x]);
			}
			i++;
		}
		x++;
	}
	return (0);
}

int		printchar(char str, char **tab)
{
	char	*print;
	int		i;

	i = 0;
	print = ft_strchar(tab, str);
	if (print == NULL)
		return (-1);
	while (print[i])
	{
		while ((print[i] >= '0' && print[i] <= '9') || print[i] == ' ' ||
				print[i] == ':')
			i++;
		write(1, &print[i], 1);
		i++;
	}
	return (0);
}
