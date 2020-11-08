/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllequen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 13:19:48 by cllequen          #+#    #+#             */
/*   Updated: 2020/10/24 14:41:09 by cllequen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		take_line(const int fd, char **line, char **str)
{
	int		index;
	char	*tmp;

	index = get_index(str, fd);
	if (str[fd][index] == '\n')
	{
		*line = ft_strsub(str[fd], 0, index);
		tmp = ft_strdup(str[fd] + index + 1);
		free(str[fd]);
		str[fd] = tmp;
		if (str[fd][0] == '\0')
			ft_strdel(&str[fd]);
	}
	else if (str[index] == '\0')
	{
		*line = ft_strdup(str[fd]);
		ft_strdel(&str[fd]);
		return (0);
	}
	return (1);
}

int		get_index(char **str, int fd)
{
	int		index;

	index = 0;
	while (str[fd][index] != '\n' && str[fd][index] != '\0')
		index++;
	return (index);
}

char	*get_backn(char *str)
{
	while (*str)
	{
		if (*str == '\n')
			return ((char*)str);
		str++;
	}
	return (0);
}

int		get_next_line(const int fd, char **line)
{
	int			ret;
	static char	*str[OPEN_MAX];
	char		buff[BUFF_SIZE + 1];
	char		*tmp;

	if (line == NULL || fd < 0 || fd >= OPEN_MAX)
		return (-1);
	while ((ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[ret] = '\0';
		if (str[fd] == NULL)
			str[fd] = ft_strnew(1);
		if ((tmp = ft_strjoin(str[fd], buff)) == NULL)
			return (-1);
		free(str[fd]);
		str[fd] = tmp;
		if (get_backn(buff))
			break ;
	}
	if (ret < 0)
		return (-1);
	else if (ret == 0 && (str[fd] == NULL))
		return (0);
	return (take_line(fd, line, str));
}
