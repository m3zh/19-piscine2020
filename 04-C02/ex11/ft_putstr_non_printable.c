/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlazzare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 09:20:39 by mlazzare          #+#    #+#             */
/*   Updated: 2020/10/17 17:49:17 by mlazzare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	convert_to_hex(unsigned char c)
{
	char *base;

	base = "0123456789abcdef";
	write(1, "\\", 1);
	write(1, &base[c / 16], 1);
	write(1, &base[c % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			convert_to_hex(str[i]);
		}
		else
		{
			write(1, &str[i], 1);
		}
		str++;
	}
}
