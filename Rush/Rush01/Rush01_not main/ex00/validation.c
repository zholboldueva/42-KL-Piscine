/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szholbol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 13:27:40 by szholbol          #+#    #+#             */
/*   Updated: 2025/08/17 13:28:12 by szholbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int		check_row_left_view(int board[4][4], int row, int number);
int		check_row_right_view(int board[4][4], int row, int number);
int		check_col_top_view(int board[4][4], int col, int number);
int		check_col_bottom_view(int board[4][4], int col, int number);

int	is_number_unique_in_row_and_col(int board[4][4], int r, int c, int num)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (board[r][i] == num || board[i][c] == num)
			return (0);
		i++;
	}
	return (1);
}

int	are_views_correct(int board[4][4], int row, int col, int *numbers)
{
	if (col == 3)
	{
		if (!check_row_left_view(board, row, numbers[8 + row]))
			return (0);
		if (!check_row_right_view(board, row, numbers[12 + row]))
			return (0);
	}
	if (row == 3)
	{
		if (!check_col_top_view(board, col, numbers[col]))
			return (0);
		if (!check_col_bottom_view(board, col, numbers[4 + col]))
			return (0);
	}
	return (1);
}
