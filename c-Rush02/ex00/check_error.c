/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllequen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 15:59:25 by cllequen          #+#    #+#             */
/*   Updated: 2020/10/25 19:01:52 by cllequen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		check_length_number(char *str, int i)
{
	int		count;

	count = 0;
	while (str[i] >= 48 && str[i] <= 57)
	{
		count++;
		i++;
	}
	if (count > 39 || count == 0)
		return (1);
	else
		return (0);
}

int		check_nb_arg(char *str)
{
	int		i;
	int		neg;

	i = 0;
	neg = 0;
	while (str[i] && str[i] == ' ')
		i++;
	if (str[i] == '\0')
		return (1);
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			neg++;
		i++;
	}
	if (str[i] == '\0' || neg % 2 != 0 || !(str[i] >= 48 && str[i] <= 57))
		return (1);
	if (check_length_number(str, i))
		return (1);
	return (0);
}

int		check_error(int ac, char **av)
{
	if (ac != 2 && ac != 3)
	{
		ft_putstr("Error\n");
		return (1);
	}
	if (ac == 2)
	{
		if (check_nb_arg(av[1]))
		{
			ft_putstr("Error\n");
			return (1);
		}
	}
	if (ac == 3)
	{
		if (check_nb_arg(av[2]))
		{
			ft_putstr("Error\n");
			return (1);
		}
	}
	return (0);
}
