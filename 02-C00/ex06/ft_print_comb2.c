/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlazzare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 11:59:13 by mlazzare          #+#    #+#             */
/*   Updated: 2020/10/09 17:45:47 by mlazzare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	convert_to_ascii(char c, int dex)
{
	if (dex == 1)
	{
		c = c / 10 + '0';
	}
	else
	{
		c = c % 10 + '0';
	}
	return (c);
}

void	ft_print_comb2(void)
{
	char a;
	char b;

	a = 0;
	while (a < 99)
	{
		b = a;
		while (b < 100)
		{
			if ((!(a == 0 && b == 0)) && (a != b))
			{
				ft_putchar(convert_to_ascii(a, 1));
				ft_putchar(convert_to_ascii(a, 0));
				write(1, " ", 1);
				ft_putchar(convert_to_ascii(b, 1));
				ft_putchar(convert_to_ascii(b, 0));
				if (!(a == 98 && b == 99))
				{
					write(1, ", ", 1);
				}
			}
			b++;
		}
		a++;
	}
}
