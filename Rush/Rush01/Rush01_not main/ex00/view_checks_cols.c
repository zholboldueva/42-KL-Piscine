/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   view_checks_cols.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szholbol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 13:30:48 by szholbol          #+#    #+#             */
/*   Updated: 2025/08/17 13:31:07 by szholbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_col_top_view(int board[4][4], int col, int number)
{
	int	i;
	int	count;
	int	tallest;

	i = 0;
	count = 0;
	tallest = 0;
	while (i < 4)
	{
		if (board[i][col] > tallest)
		{
			tallest = board[i][col];
			count++;
		}
		i++;
	}
	return (count == number);
}

int	check_col_bottom_view(int board[4][4], int col, int number)
{
	int	i;
	int	count;
	int	tallest;

	i = 3;
	count = 0;
	tallest = 0;
	while (i >= 0)
	{
		if (board[i][col] > tallest)
		{
			tallest = board[i][col];
			count++;
		}
		i--;
	}
	return (count == number);
}
