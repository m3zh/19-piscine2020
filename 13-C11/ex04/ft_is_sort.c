/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlazzare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 16:59:48 by mlazzare          #+#    #+#             */
/*   Updated: 2020/10/28 20:02:57 by mlazzare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 1;
	if (length > 1)
	{
		while ((i < length) && ((*f)(tab[i - 1], tab[i]) == 0))
			i++;
		if (((*f)(tab[i - 1], tab[i])) <= 0)
		{
			while (++i < length)
			{
				if (((*f)(tab[i - 1], tab[i])) > 0)
					return (0);
			}
		}
		else if (((*f)(tab[i - 1], tab[i])) >= 0)
		{
			while (++i < length)
			{
				if (((*f)(tab[i - 1], tab[i])) < 0)
					return (0);
			}
		}
	}
	return (1);
}
