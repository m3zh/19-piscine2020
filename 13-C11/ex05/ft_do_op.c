/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlazzare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 12:18:40 by mlazzare          #+#    #+#             */
/*   Updated: 2020/10/28 20:20:25 by mlazzare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	check_value(char *v)
{
	if ((v[0] >= 'a' && v[0] <= 'z')
		|| (v[0] >= 'A' && v[0] <= 'Z'))
		return (0);
	return (1);
}

int	ft_calculate(int num1, int num2, char *op)
{
	if (op[0] == '+')
		return (num1 + num2);
	if (op[0] == '-')
		return (num1 - num2);
	if (op[0] == 42)
		return (num1 * num2);
	if (op[0] == '/')
		return (num1 / num2);
	if (op[0] == '%')
		return (num1 % num2);
	return (0);
}

int	ft_do_op(char *v1, char *op, char *v2, int (*f)(int, int, char*))
{
	int num1;
	int num2;

	if (!check_value(v1))
		num1 = 0;
	else
		num1 = ft_atoi(v1);
	if (!check_value(v2))
		num2 = 0;
	else
		num2 = ft_atoi(v2);
	return ((*f)(num1, num2, op));
}
