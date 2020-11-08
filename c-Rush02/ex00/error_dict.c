/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllequen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 17:12:33 by cllequen          #+#    #+#             */
/*   Updated: 2020/10/25 17:29:28 by cllequen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		before_dpoint(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0' && str[i] != ':')
	{
		if (!(str[i] >= 48 && str[i] <= 57))
			return (1);
		i++;
	}
	if (str[i] == '\0')
		return (1);
	return (0);
}

int		after_dpoint(char *str)
{
	int		i;

	i = 0;
	while (str[i] != ':' && str[i] != '\0')
		i++;
	if (str[i] == '\0')
		return (1);
	if (str[i] == ':' && str[i + 1] == '\0')
		return (1);
	return (0);
}

int		check_error_dict(char **dict)
{
	int		i;

	i = 0;
	while (dict[i] != NULL)
	{
		if (before_dpoint(dict[i]) || after_dpoint(dict[i]))
		{
			ft_putstr("Dict Error\n");
			return (1);
		}
		i++;
	}
	return (0);
}
