/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlazzare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 11:19:48 by mlazzare          #+#    #+#             */
/*   Updated: 2020/10/20 10:10:30 by mlazzare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;

	i = nb;
	if (nb == 0)
		return (1);
	if (!nb || nb < 0)
		return (0);
	while (--i > 0)
	{
		nb *= i;
	}
	return (nb);
}
