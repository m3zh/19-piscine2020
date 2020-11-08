/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlazzare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 11:52:08 by mlazzare          #+#    #+#             */
/*   Updated: 2020/10/28 20:31:12 by mlazzare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef FT_H
#	define FT_H

#include <unistd.h>

int		check_argv(int argc, char **argv);
int		ft_do_op(char *v1, char *op, char *v3, int (*f)(int, int, char*));
int		ft_calculate(int v1, int v2, char *op);
int		ft_isspace(char c);
int		ft_atoi(char *str);
int		check_value(char *v);
void	ft_putnbr(int nbr);

#	endif
