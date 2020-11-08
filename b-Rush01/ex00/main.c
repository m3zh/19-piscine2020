/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlazzare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 10:40:44 by mlazzare          #+#    #+#             */
/*   Updated: 2020/10/18 19:20:19 by mlazzare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int		main(int argc, char *argv[])
{
	char board[6][6];

	init_board(board, argv[1]);
	start_game(board, argv[1]);
	if solve_board(board)
	{
		print_board(board);
	} else
	{
		printf("No solution found\n");
	}
	return (0);
}
