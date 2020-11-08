/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlazzare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 18:10:47 by mlazzare          #+#    #+#             */
/*   Updated: 2020/10/11 15:26:30 by mlazzare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	left_tab(int i, int y)
{
	if (i == 0)
	{
		ft_putchar(47);
	}
	else if (i == (y - 1))
	{
		ft_putchar(92);
	}
	else if (i > 0 && i < (y - 1))
	{
		ft_putchar('*');
	}
}

void	right_tab(int i, int y)
{
	if (i == 0)
	{
		ft_putchar(92);
	}
	else if (i == (y - 1))
	{
		ft_putchar(47);
	}
	else if (i > 0 && i < (y - 1))
	{
		ft_putchar('*');
	}
}

void	content_tab(int i, int y)
{
	if (i == 0 || i == (y - 1))
	{
		ft_putchar('*');
	}
	else
	{
		ft_putchar(' ');
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
			if (j == 0)
			{
				left_tab(i, y);
			}
			else if (j == (x - 1))
			{
				right_tab(i, y);
			}
			else if (j > 0 && j < (x - 1))
			{
				content_tab(i, y);
			}
		}
		ft_putchar(10);
	}
}
