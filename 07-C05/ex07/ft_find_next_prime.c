/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlazzare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 16:39:06 by mlazzare          #+#    #+#             */
/*   Updated: 2020/10/21 10:10:09 by mlazzare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;

	i = 3;
	if (nb == 2)
		return (1);
	if (nb < 2 || !(nb & 1))
		return (0);
	while (i < nb && i < 46341)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 0)
		return (2);
	if (ft_is_prime(nb))
		return (nb);
	return (ft_find_next_prime(nb + 1));
}
