/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlazzare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 18:10:47 by mlazzare          #+#    #+#             */
/*   Updated: 2020/10/11 17:02:04 by yel-mess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	side_tab(int i, int y)
{
	if (i == 0 || i == (y - 1))
	{
		ft_putchar('o');
	}
	if (i > 0 && i < (y - 1))
	{
		ft_putchar('|');
	}
}

void	central_tab(int j, int x)
{
	if (j > 0 && j < (x - 1))
	{
		ft_putchar('-');
	}
}

void	rush(int x, int y)
{
	int i;
	int j;

	i = -1;
	while (++i < y)
	{
		j = -1;
		while (++j < x)
		{
			if ((j == 0) || (j == (x - 1)))
			{
				side_tab(i, y);
			}
			else if ((i == 0) || (i == (y - 1)))
			{
				central_tab(j, x);
			}
			else
			{
				ft_putchar(' ');
			}
		}
		ft_putchar(10);
	}
}
