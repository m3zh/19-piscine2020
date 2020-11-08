/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trim_dict.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllequen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 14:30:59 by cllequen          #+#    #+#             */
/*   Updated: 2020/10/25 18:46:05 by cllequen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		get_length_line(char *str)
{
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (str[i] != '\0' && str[i] != ':')
	{
		if (str[i] == ' ')
			i++;
		else
		{
			i++;
			len++;
		}
	}
	while (str[i] == ' ' && str[i] != '\0')
		i++;
	while (str[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

int		get_size_dict(char **dict)
{
	int		res;
	int		i;

	res = 0;
	i = 0;
	while (dict[i] != NULL)
	{
		if (check_line(dict[i]))
		{
			res++;
			i++;
		}
		else
			i++;
	}
	return (res);
}

int		check_line(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '\n' && str[i] != ' ')
			return (1);
		i++;
	}
	return (0);
}

char	*copy_line(char *dict)
{
	int		j;
	int		l;
	char	*trimed;

	j = 0;
	l = 0;
	trimed = (char *)malloc(sizeof(char) * get_length_line(dict) + 1);
	while (dict[j] != '\0' && dict[j] != ':')
	{
		if (dict[j] != ' ')
		{
			trimed[l] = dict[j];
			l++;
			j++;
		}
		else
			j++;
	}
	trimed[l] = ':';
	l++;
	if (dict[j] == ':')
		trimed = copy_line2(trimed, l, dict, j);
	return (trimed);
}

char	**trim_dict(char **dict)
{
	char	**trimed;
	int		i;
	int		k;

	i = 0;
	k = 0;
	trimed = (char **)malloc(sizeof(char *) * get_size_dict(dict) + 1);
	while (dict[i] != NULL)
	{
		if (check_line(dict[i]))
		{
			trimed[k] = copy_line(dict[i]);
			k++;
			i++;
		}
		else
			i++;
	}
	trimed[k] = NULL;
	return (trimed);
}
