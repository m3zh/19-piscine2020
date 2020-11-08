/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlazzare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 13:50:53 by mlazzare          #+#    #+#             */
/*   Updated: 2020/10/13 19:26:49 by mlazzare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				lenstr(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int destlen;
	unsigned int srclen;

	i = 0;
	j = 0;
	destlen = lenstr(dest);
	srclen = lenstr(src);
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < (size - destlen - 1))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (size != 0)
	{
		dest[i] = '\0';
	}
	return (srclen + destlen);
}
