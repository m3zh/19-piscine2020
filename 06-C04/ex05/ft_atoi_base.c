/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlazzare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 21:58:05 by mlazzare          #+#    #+#             */
/*   Updated: 2020/10/18 17:39:03 by mlazzare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		num_sign(char *s)
{
	int i;
	int minus;
	int plus;

	i = 0;
	minus = 0;
	plus = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '+')
			plus++;
		if (s[i] == '-')
			minus++;
		if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122))
			break ;
		i++;
	}
	return (minus > plus) ? -1 : 1;
}

int		ft_isspace(char c)
{
	char	*spaces;
	int		i;

	spaces = "\t\n\v\f\r";
	i = 0;
	while (i < 5)
	{
		if ((spaces[i] == c) || c == ' ')
			return (1);
		i++;
	}
	return (0);
}

/*
int convert_to_base(int n, int base_num)
{
 		while (i > 0)
 		{
 			n = n / base_num;
 		}
 		else
 		{
 			n / base_num;
 			n % base_num;
 		}
 	}
}
*/

int		ft_atoi_base(char *str, char *base)
{
	int			i;
	long int	n;
	int			sign;
	int			base_num;

	base_num = 0;
	while (base[base_num] != '\0')
		base_num++;
	i = 0;
	n = 0;
	sign = num_sign(str);
	while (str[i] != '\0')
	{
		if (ft_isspace(str[i]))
			i++;
		if (str[i] == '+' || str[i] == '-')
			i++;
		if (str[i] >= '0' && str[i] <= '9')
		{
			n = n * 10 + (str[i] - '0');
		}
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
			break ;
		i++;
	}
	/* n = convert_to_base(n, base_num);*/
	return (sign * n);
}
