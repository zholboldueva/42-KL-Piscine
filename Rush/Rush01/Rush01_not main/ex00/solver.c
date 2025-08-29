/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szholbol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 13:26:34 by szholbol          #+#    #+#             */
/*   Updated: 2025/08/17 13:26:39 by szholbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_number_unique_in_row_and_col(int board[4][4], int r, int c, int num);
int		are_views_correct(int board[4][4], int row, int col, int *numbers);

void	get_next_spot(int row, int col, int *next_row, int *next_col)
{
	*next_col = col + 1;
	*next_row = row;
	if (*next_col == 4)
	{
		*next_col = 0;
		*next_row = row + 1;
	}
}

int	find_solution(int board[4][4], int *numbers, int row, int col)
{
	int	num_to_try;
	int	next_row;
	int	next_col;

	if (row == 4)
		return (1);
	num_to_try = 1;
	while (num_to_try <= 4)
	{
		if (is_number_unique_in_row_and_col(board, row, col, num_to_try))
		{
			board[row][col] = num_to_try;
			if (are_views_correct(board, row, col, numbers))
			{
				get_next_spot(row, col, &next_row, &next_col);
				if (find_solution(board, numbers, next_row, next_col))
					return (1);
			}
		}
		board[row][col] = 0;
		num_to_try++;
	}
	return (0);
}
