/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlazzare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 19:39:42 by mlazzare          #+#    #+#             */
/*   Updated: 2020/10/20 17:02:43 by mlazzare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(char **a, char **b)
{
	char *tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

void	sort_params(int argc, char *argv[])
{
	int		i;
	int		j;

	i = 2;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0' || argv[i - 1][j] != '\0')
		{
			if (ft_strcmp(argv[i], argv[i - 1]) < 0)
			{
				ft_swap(&argv[i], &argv[i - 1]);
				i = 1;
				break ;
			}
			j++;
		}
		i++;
	}
}

void	ft_putargv(char *argv)
{
	while (*argv)
		write(1, argv++, 1);
	write(1, "\n", 1);
}

int		main(int argc, char *argv[])
{
	int i;
	int j;

	i = 1;
	if (argc == 2)
	{
		ft_putargv(argv[1]);
	}
	else
	{
		sort_params(argc, argv);
		while (i < argc)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				write(1, &argv[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
