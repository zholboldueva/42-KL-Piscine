/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquek <kquek@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 12:52:50 by kquek             #+#    #+#             */
/*   Updated: 2025/08/17 12:53:01 by kquek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_unique_in_row(int grid[4][4], int row, int num);
int	is_unique_in_col(int grid[4][4], int col, int num);
int	check_all_clues(int grid[4][4], int clues[16]);

static int	backtrack(int grid[4][4], int clues[16], int row, int col)
{
	int	num;

	if (row == 4)
		return (check_all_clues(grid, clues));
	if (col == 4)
		return (backtrack(grid, clues, row + 1, 0));
	num = 1;
	while (num <= 4)
	{
		if (is_unique_in_row(grid, row, num)
			&& is_unique_in_col(grid, col, num))
		{
			grid[row][col] = num;
			if (backtrack(grid, clues, row, col + 1))
				return (1);
			grid[row][col] = 0;
		}
		num++;
	}
	return (0);
}

int	solve(int grid[4][4], int clues[16])
{
	return (backtrack(grid, clues, 0, 0));
}
