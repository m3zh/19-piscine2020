/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlazzare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 14:13:19 by mlazzare          #+#    #+#             */
/*   Updated: 2020/10/26 19:23:34 by mlazzare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if ((range[0] = (int *)malloc(sizeof(int) * (max - min))))
	{
		while (min < max)
		{
			range[0][i] = min;
			min++;
			i++;
		}
	}
	else
	{
		return (-1);
	}
	return (i);
}
