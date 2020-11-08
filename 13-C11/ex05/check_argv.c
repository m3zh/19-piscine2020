/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlazzare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 19:42:15 by mlazzare          #+#    #+#             */
/*   Updated: 2020/10/28 20:23:45 by mlazzare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_argv(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	if ((argv[2][0] != '+' && argv[2][0] != '-'
			&& argv[2][0] != 42 && argv[2][0] != '/' && argv[2][0] != '%'))
	{
		write(1, "0\n", 2);
		return (0);
	}
	if (argv[2][0] == '/' && argv[3][0] == '0')
	{
		write(1, "Stop : division by zero\n", 24);
		return (0);
	}
	if (argv[2][0] == '%' && argv[3][0] == '0')
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	return (1);
}
