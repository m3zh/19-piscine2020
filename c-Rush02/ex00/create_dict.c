/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_dict.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllequen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 14:42:28 by cllequen          #+#    #+#             */
/*   Updated: 2020/10/25 18:46:51 by cllequen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		ft_strlen_dpoint(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0' && str[i] != ':')
		i++;
	return (i);
}

int		sort_dict2(char **dict, int i)
{
	char	*tmp;

	if (ft_strlen_dpoint(dict[i]) == ft_strlen_dpoint(dict[i + 1]))
	{
		if (ft_strcmp(dict[i], dict[i + 1]) > 0)
		{
			tmp = dict[i];
			dict[i] = dict[i + 1];
			dict[i + 1] = tmp;
			return (0);
		}
	}
	else
	{
		if (ft_strlen_dpoint(dict[i]) > ft_strlen_dpoint(dict[i + 1]))
		{
			tmp = dict[i];
			dict[i] = dict[i + 1];
			dict[i + 1] = tmp;
			return (0);
		}
	}
	return (i + 1);
}

void	sort_dict(char **dict)
{
	int		i;

	i = 0;
	while (dict[i + 1] != NULL)
		i = sort_dict2(dict, i);
}

char	**create_dict(int fd)
{
	char	**dict;
	char	**trimed;
	char	**line;
	int		i;

	i = 0;
	dict = (char **)malloc(sizeof(char *) * 100 + 1);
	line = (char **)malloc(sizeof(char *) * 1 + 1);
	while (get_next_line(fd, line))
	{
		dict[i] = *line;
		i++;
	}
	dict[i] = NULL;
	trimed = trim_dict(dict);
	sort_dict(trimed);
	free(dict);
	free(line);
	return (trimed);
}
