/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szholbol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 13:49:55 by szholbol          #+#    #+#             */
/*   Updated: 2025/08/17 13:50:10 by szholbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

static int	is_valid_char(char c)
{
	return ((c >= '1' && c <= '4') || c == ' ');
}

int	*get_numbers_from_input(char *str)
{
	int	*numbers;
	int	i;
	int	count;

	numbers = (int *)malloc(16 * sizeof(int));
	if (!numbers)
		return (0);
	i = 0;
	count = 0;
	while (str[i] && count < 16)
	{
		if (!is_valid_char(str[i]))
			return (free(numbers), NULL);
		if (str[i] >= '1' && str[i] <= '4')
			numbers[count++] = str[i] - '0';
		i++;
	}
	if (count != 16 || str[i])
		return (free(numbers), NULL);
	return (numbers);
}
