/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canjugun <canjugun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 14:36:53 by cllequen          #+#    #+#             */
/*   Updated: 2020/10/25 21:10:35 by canjugun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# define BUFF_SIZE 32

# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <fcntl.h>
# include <sys/stat.h>
# include <stdio.h>
# include <limits.h>

int		take_line(const int fd, char **line, char **str);
int		get_index(char **str, int fd);
char	*get_backn(char *str);
int		get_next_line(const int fd, char **line);

char	*ft_strsub(char const *s, unsigned int start, size_t len);
void	ft_strdel(char **as);
char	*ft_strdup(char const *str);
int		ft_strlen(char const *str);
char	*ft_strnew(size_t size);
char	*ft_strjoin(char const *s1, char const *s2);
void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);

char	**create_dict(int fd);
int		ft_strlen_dpoint(char *str);
void	sort_dict(char **dict);
int		sort_dict2(char **dict, int i);

char	**trim_dict(char **dict);
int		check_line(char *str);
int		get_size_dict(char **dict);
int		get_length_line(char *str);
char	*copy_line(char *dict);
char	*copy_line2(char *trimed, int l, char *dict, int j);

int		check_error(int ac, char **av);
int		check_nb_arg(char *str);
int		check_length_number(char *str, int i);
int		check_dict_exist(char *str);

int		check_error_dict(char **dict);
int		after_dpoint(char *str);
int		before_dpoint(char *str);

void	print_centaine(char *str, char **tab);
int		printchar(char str, char **tab);
char	*ft_strchar(char **str, char to_find);
int		print(char *str, char **tab);
char	*ft_strstr(char **str, char *to_find);

void	free_dict(char **dict);

void	print_numbersuite(char *str, char **tab, int i, int y);
int		undecillion(char *str, char **tab, int i, int y);
int		decillion(char *str, char **tab, int i, int y);
int		nonillion(char *str, char **tab, int i, int y);
int		octillion(char *str, char **tab, int i, int y);
int		septillion(char *str, char **tab, int i, int y);
int		sextillion(char *str, char **tab, int i, int y);
int		quintillion(char *str, char **tab, int i, int y);
int		quadrillion(char *str, char **tab, int i, int y);
int		trillion(char *str, char **tab, int i, int y);
int		billion(char *str, char **tab, int i, int y);
int		million(char *str, char **tab, int i, int y);
int		thousand(char *str, char **tab, int i, int y);
int		final(char *str, char **tab, int i, int y);

int		print3(char *str, char **tab, int x);
void	print_centaine(char *str, char **tab);
void	print_number(char *str, char **tab);
void	print_numbersuite(char *str, char **tab, int i, int y);

#endif
