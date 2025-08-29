/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szholbol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 13:31:32 by szholbol          #+#    #+#             */
/*   Updated: 2025/08/17 13:32:21 by szholbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_char(char c);

void	setup_empty_board(int board[4][4])
{
	int	row;
	int	col;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			board[row][col] = 0;
			col++;
		}
		row++;
	}
}

void	print_solution(int board[4][4])
{
	int	row;
	int	col;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			print_char(board[row][col] + '0');
			if (col < 3)
				print_char(' ');
			col++;
		}
		print_char('\n');
		row++;
	}
}
