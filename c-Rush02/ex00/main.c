/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canjugun <canjugun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 13:32:54 by cllequen          #+#    #+#             */
/*   Updated: 2020/10/25 21:57:38 by canjugun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		main(int ac, char **av)
{
	int		fd;
	char	**dict;

	if (check_error(ac, av))
		return (0);
	if (ac == 2)
		fd = open("numbers.dict", O_RDONLY);
	else
		fd = open(av[1], O_RDONLY);
	if (fd < 0 || fd >= OPEN_MAX)
	{
		ft_putstr("Dict Error\n");
		return (0);
	}
	dict = create_dict(fd);
	if (check_error_dict(dict))
		return (0);
	ac == 2 ? print_number(av[1], dict) : print_number(av[2], dict);
	free_dict(dict);
	close(fd);
	return (0);
}
