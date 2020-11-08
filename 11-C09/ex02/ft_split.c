/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlazzare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 21:50:26 by mlazzare          #+#    #+#             */
/*   Updated: 2020/10/28 08:47:26 by mlazzare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_in_set(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if ((charset[i]) == c)
			return (1);
		i++;
	}
	return (0);
}

int		word_count(char *s, char *charset)
{
	int i;
	int count;

	i = 1;
	count = 0;
	while (s[i])
	{
		if ((!(is_in_set(s[i - 1], charset)) && (is_in_set(s[i], charset))))
			count++;
		if ((!(is_in_set(s[i], charset)) && s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

int		ft_len(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	*split_words(int words, char **arr, char *str, char *set)
{
	int i;
	int j;
	int k;
	int strlen;

	i = 0;
	j = 0;
	strlen = ft_len(str);
	while (i < words)
	{
		k = 0;
		arr[i] = malloc(sizeof(char) * (strlen + 1));
		if (!arr[i])
			return (0);
		while (str[j] && is_in_set(str[j], set))
			j++;
		while (str[j] && (!(is_in_set(str[j], set))))
			arr[i][k++] = str[j++];
		arr[i][k] = '\0';
		i++;
	}
	arr[i] = 0;
	return (arr);
}

char	**ft_split(char *str, char *charset)
{
	int		words;
	char	**arr2d;

	words = word_count(str, charset);
	arr2d = (char **)malloc(sizeof(char*) * (words + 1));
	if (!arr2d)
		arr2d = NULL;
	split_words(words, arr2d, str, charset);
	return (arr2d);
}
