/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlazzare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 10:46:15 by mlazzare          #+#    #+#             */
/*   Updated: 2020/10/18 19:09:06 by mlazzare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	init_board(char board[][6], char *argv[])
{
	int i;
	int j;

	i = 1;
	j = 1;

	while (i < 5)
	{
		j = 1;
		while (j < 5)
		{
			board[i][j] = '0';
			j++;
		}
		i++;
	}
	board[0][0] = '0';
	board[0][1] = argv[1][0];
	board[0][2] = argv[1][2];
	board[0][3] = argv[1][4];
	board[0][4] = argv[1][6];
	board[0][5] = '0';
	board[1][0] = argv[1][16];
	board[1][5] = argv[1][24];
	board[2][0] = argv[1][18];
	board[2][5] = argv[1][26];
	board[3][0] = argv[1][20];
	board[3][5] = argv[1][28];
	board[4][0] = argv[1][22];
	board[4][5] = argv[1][30];
	board[5][0] = '0';
	board[5][1] = argv[1][8];
	board[5][2] = argv[1][10];
	board[5][3] = argv[1][12];
	board[5][4] = argv[1][14];
	board[5][5] = '0';
}
