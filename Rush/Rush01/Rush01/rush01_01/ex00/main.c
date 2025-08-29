/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquek <kquek@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 12:55:08 by kquek             #+#    #+#             */
/*   Updated: 2025/08/17 13:31:04 by kquek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		parse_input(char *input, int clues[16]);
int		solve(int grid[4][4], int clues[16]);
void	print_grid(int grid[4][4]);
void	ft_putstr(char *str);

static void	init_grid(int grid[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
}

static void	print_error(void)
{
	ft_putstr("Error\n");
}

int	main(int argc, char **argv)
{
	int	clues[16];
	int	grid[4][4];

	init_grid(grid);
	if (argc != 2 || !parse_input(argv[1], clues))
	{
		print_error();
		return (1);
	}
	if (!solve(grid, clues))
	{
		print_error();
		return (1);
	}
	print_grid(grid);
	return (0);
}
