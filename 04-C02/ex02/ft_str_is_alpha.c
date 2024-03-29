/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlazzare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 18:28:43 by mlazzare          #+#    #+#             */
/*   Updated: 2020/10/13 20:16:43 by mlazzare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 65 && str[i] <= 90) ||
			(str[i] >= 97 && str[i] <= 122)))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
