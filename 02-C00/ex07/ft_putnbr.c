/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlazzare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 11:59:13 by mlazzare          #+#    #+#             */
/*   Updated: 2020/10/09 17:47:02 by mlazzare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_arrsize(int n)
{
	int size;

	size = 0;
	while (n)
	{
		size++;
		n /= 10;
	}
	return (size - 1);
}

void	ft_putnbr(int nb)
{
	int		size;
	int		size2;
	int		arr[ft_arrsize(nb)];
	int		i;
	char	a;

	size = ft_arrsize(nb);
	size2 = size;
	i = 0;
	while (nb)
	{
		arr[size] = nb % 10;
		nb /= 10;
		size--;
	}
	while (i <= size2)
	{
		a = arr[i] + '0';
		write(1, &a, 1);
		i++;
	}
}
