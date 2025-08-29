/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   view_checks_rows.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szholbol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 13:29:30 by szholbol          #+#    #+#             */
/*   Updated: 2025/08/17 13:29:56 by szholbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_row_left_view(int board[4][4], int row, int number)
{
	int	i;
	int	count;
	int	tallest;

	i = 0;
	count = 0;
	tallest = 0;
	while (i < 4)
	{
		if (board[row][i] > tallest)
		{
			tallest = board[row][i];
			count++;
		}
		i++;
	}
	return (count == number);
}

int	check_row_right_view(int board[4][4], int row, int number)
{
	int	i;
	int	count;
	int	tallest;

	i = 3;
	count = 0;
	tallest = 0;
	while (i >= 0)
	{
		if (board[row][i] > tallest)
		{
			tallest = board[row][i];
			count++;
		}
		i--;
	}
	return (count == number);
}
