/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlazzare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 21:03:33 by mlazzare          #+#    #+#             */
/*   Updated: 2020/10/13 14:28:37 by mlazzare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		found(int i, char *str, char *substring)
{
	int j;
	int k;

	j = 0;
	k = i;
	while ((str[k] - substring[j]) == 0)
	{
		j++;
		k++;
		if (substring[j] == '\0')
		{
			return (1);
		}
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	char	*p;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		if ((str[i] - to_find[j]) == 0)
		{
			p = &str[i];
			if (found(i, str, to_find) == 1)
			{
				return (p);
			}
		}
		i++;
	}
	return (0);
}
