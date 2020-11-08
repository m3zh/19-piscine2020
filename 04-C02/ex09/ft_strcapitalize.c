/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlazzare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 20:28:19 by mlazzare          #+#    #+#             */
/*   Updated: 2020/10/17 18:05:02 by mlazzare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_ch_is_lowercase(char c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}

int		ft_ch_is_uppercase(char c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}

int		is_alphanumeric(char c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int j;

	i = 0;
	j = i - 1;
	while (str[i] != '\0')
	{
		if (ft_ch_is_lowercase(str[i]) == 1)
		{
			if (i == 0 || (!(is_alphanumeric(str[j]))))
			{
				str[i] -= 32;
			}
		}
		if (ft_ch_is_uppercase(str[i]) == 1)
		{
			if (is_alphanumeric(str[j]) == 1)
			{
				str[i] += 32;
			}
		}
		i++;
		j++;
	}
	return (str);
}
