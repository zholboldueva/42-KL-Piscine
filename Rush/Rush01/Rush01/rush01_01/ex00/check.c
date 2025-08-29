/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquek <kquek@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 12:53:24 by kquek             #+#    #+#             */
/*   Updated: 2025/08/17 12:53:36 by kquek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_left(int row, int grid[4][4], int clue)
{
	int	count;
	int	max;
	int	i;

	count = 0;
	max = 0;
	i = 0;
	while (i < 4)
	{
		if (grid[row][i] > max)
		{
			max = grid[row][i];
			count++;
		}
		i++;
	}
	return (count == clue);
}

int	check_right(int row, int grid[4][4], int clue)
{
	int	count;
	int	max;
	int	i;

	count = 0;
	max = 0;
	i = 3;
	while (i >= 0)
	{
		if (grid[row][i] > max)
		{
			max = grid[row][i];
			count++;
		}
		i--;
	}
	return (count == clue);
}

int	check_top(int col, int grid[4][4], int clue)
{
	int	count;
	int	max;
	int	i;

	count = 0;
	max = 0;
	i = 0;
	while (i < 4)
	{
		if (grid[i][col] > max)
		{
			max = grid[i][col];
			count++;
		}
		i++;
	}
	return (count == clue);
}

int	check_bottom(int col, int grid[4][4], int clue)
{
	int	count;
	int	max;
	int	i;

	count = 0;
	max = 0;
	i = 3;
	while (i >= 0)
	{
		if (grid[i][col] > max)
		{
			max = grid[i][col];
			count++;
		}
		i--;
	}
	return (count == clue);
}

int	check_all_clues(int grid[4][4], int clues[16])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (!check_top(i, grid, clues[i])
			|| !check_bottom(i, grid, clues[i + 4])
			|| !check_left(i, grid, clues[i + 8])
			|| !check_right(i, grid, clues[i + 12]))
			return (0);
		i++;
	}
	return (1);
}
