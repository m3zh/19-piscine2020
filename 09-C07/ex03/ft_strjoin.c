/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlazzare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 16:42:56 by mlazzare          #+#    #+#             */
/*   Updated: 2020/10/25 10:19:11 by mlazzare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		str_sep_len(int size, char **strs, char *sep)
{
	int i;
	int j;
	int k;
	int count;

	i = 0;
	j = 0;
	count = 0;
	while (i < size)
	{
		j = 0;
		k = 0;
		while (strs[i][j])
		{
			j++;
		}
		count += j;
		if (i < size - 1)
		{
			while (sep[k++])
				count++;
		}
		i++;
	}
	return (count);
}

int		sep_len(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*concat_sep(char *ret, char *sep, int pos)
{
	while (*sep)
	{
		ret[pos] = *sep;
		pos++;
		sep++;
	}
	return (ret);
}

char	*concat_string(int size, char *ret, char **srcs, char *sep)
{
	int i;
	int j;
	int k;

	i = 0;
	k = -1;
	while (++k < size)
	{
		j = 0;
		while (srcs[k][j])
		{
			ret[i] = srcs[k][j++];
			i++;
		}
		if (k < size - 1)
		{
			ret = concat_sep(ret, sep, i);
			i += sep_len(sep);
		}
	}
	ret[i] = '\0';
	return (ret);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		ret_len;
	char	*ret;

	ret_len = str_sep_len(size, strs, sep);
	ret = (char *)malloc(sizeof(char) * (ret_len + 1));
	if (!size)
		ret[0] = 0;
	else
		ret = concat_string(size, ret, strs, sep);
	return (ret);
}
