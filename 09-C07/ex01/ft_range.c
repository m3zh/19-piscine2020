/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlazzare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 13:43:05 by mlazzare          #+#    #+#             */
/*   Updated: 2020/10/23 18:27:10 by mlazzare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int *arr;

	i = 0;
	arr = (int*)malloc(sizeof(int) * (max - min));
	if (min >= max)
	{
		arr = NULL;
		return (arr);
	}
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
