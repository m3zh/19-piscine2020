/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlazzare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 16:20:46 by mlazzare          #+#    #+#             */
/*   Updated: 2020/10/18 19:18:14 by mlazzare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_row(char board[][6], int row, int i)
{
	while (col < 6)
	{
		if (board[row][col] == i)
			return (1);
		col++;
	}
	return (0);
}

int		check_col(char board[][6], int col, int i)
{
	while (row < 6)
	{
		if (board[row][col] == i)
			return (1);
		row++;
	}
	return (0);
}

int		check_case(char board[][6], int row, int col, int i)
{
	if (check_row(board, row, i) && check_col(board, col, i))
		return (1);
	return (0);
}

void	solve_board(char board[][6])
{
	int row;
	int col;
	int num;

	row = 1;
	col = 1;
	num = 1;
	while (row < 5)
	{
		col = 1;
		while (col < 5)
		{
			if (board[row][col] == '0')
			{
				while (num < 5)
				{
					if (check_case(board, row, col, num))
						board[row][col] = num;
					num++;
				}
				col++;
			}
			row++;
		}
	}
}
