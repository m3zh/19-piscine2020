/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlazzare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 17:56:41 by mlazzare          #+#    #+#             */
/*   Updated: 2020/10/24 13:42:02 by mlazzare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int					ft_len(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char				*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*dup;

	i = 0;
	len = ft_len(src);
	dup = (char *)malloc(sizeof(*src) * (len + 1));
	if (dup == NULL)
		return (NULL);
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*my_struct;

	i = 0;
	if ((my_struct = malloc(sizeof(t_stock_str) * (ac + 1))))
	{
		while (i < ac)
		{
			my_struct[i].size = ft_len(av[i]);
			my_struct[i].str = av[i];
			my_struct[i].copy = ft_strdup(av[i]);
			i++;
		}
		my_struct[i].str = 0;
	}
	else
		my_struct = NULL;
	return (my_struct);
}
