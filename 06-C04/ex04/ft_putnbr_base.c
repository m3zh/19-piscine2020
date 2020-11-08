/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlazzare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 21:57:25 by mlazzare          #+#    #+#             */
/*   Updated: 2020/10/15 18:45:30 by mlazzare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nb, char *base)
{
	long int	i;
	long		len_base;

	i = nb;
	len_base = 0;
	while (base[len_base] != '\0')
		len_base++;
	if (i < 0)
	{
		i *= -1;
		ft_putchar('-');
	}
	if (i < len_base)
	{
		ft_putchar(base[i % len_base]);
	}
	else
	{
		ft_putnbr_base(i / len_base, base);
		ft_putchar(i % len_base + '0');
	}
}
