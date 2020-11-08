/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_utilities.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllequen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 14:35:23 by cllequen          #+#    #+#             */
/*   Updated: 2020/10/24 14:39:26 by cllequen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	ft_strdel(char **as)
{
	if (as)
	{
		free(*as);
		*as = NULL;
	}
}

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*new_str;

	new_str = (char *)malloc(sizeof(char) * size + 1);
	if (!new_str)
		return (NULL);
	i = 0;
	while (i < size)
	{
		new_str[i] = '\0';
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

int		ft_strlen(const char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *str)
{
	char	*result;
	int		length;
	int		i;

	i = 0;
	length = ft_strlen(str);
	result = (char *)malloc(sizeof(char) * length + 1);
	if (!result)
		return (NULL);
	while (str[i] != '\0')
	{
		result[i] = str[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*new_str;
	size_t	len_1;
	size_t	len_2;

	if (!s1 || !s2)
		return (NULL);
	len_1 = ft_strlen(s1);
	len_2 = ft_strlen(s2);
	new_str = (char *)malloc(sizeof(char *) * (len_1 + len_2) + 1);
	if (!new_str)
		return (NULL);
	i = 0;
	j = 0;
	while (len_1-- > 0)
		new_str[i++] = s1[j++];
	j = 0;
	while (len_2-- > 0)
		new_str[i++] = s2[j++];
	new_str[i] = '\0';
	return (new_str);
}
