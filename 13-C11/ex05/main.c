/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlazzare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 19:11:20 by mlazzare          #+#    #+#             */
/*   Updated: 2020/10/28 20:19:00 by mlazzare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int argc, char **argv)
{
	int num;

	num = 0;
	if (check_argv(argc, argv))
	{
		num = ft_do_op(argv[1], argv[2], argv[3], &ft_calculate);
		ft_putnbr(num);
		write(1, "\n", 1);
	}
	return (0);
}
