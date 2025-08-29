/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szholbol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 13:25:35 by szholbol          #+#    #+#             */
/*   Updated: 2025/08/17 13:25:59 by szholbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int		*get_numbers_from_input(char *str);
void	setup_empty_board(int board[4][4]);
int		find_solution(int board[4][4], int *numbers, int row, int col);
void	print_solution(int board[4][4]);
void	print_string(char *str);

int	main(int argc, char **argv)
{
	int	board[4][4];
	int	*numbers_from_user;

	if (argc != 2)
	{
		print_string("Error\n");
		return (1);
	}
	numbers_from_user = get_numbers_from_input(argv[1]);
	if (numbers_from_user == 0)
	{
		print_string("Error\n");
		return (1);
	}
	setup_empty_board(board);
	if (find_solution(board, numbers_from_user, 0, 0))
	{
		print_solution(board);
	}
	else
	{
		print_string("Error\n");
	}
	free(numbers_from_user);
	return (0);
}
