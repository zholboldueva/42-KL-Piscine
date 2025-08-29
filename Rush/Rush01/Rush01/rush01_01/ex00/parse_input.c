/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquek <kquek@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 12:52:24 by kquek             #+#    #+#             */
/*   Updated: 2025/08/17 12:52:36 by kquek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	parse_input(char *input, int clues[16])
{
	int	i;
	int	j;

	if (ft_strlen(input) != 31)
		return (0);
	i = 0;
	j = 0;
	while (input[i] && j < 16)
	{
		if ((i % 2) == 0)
		{
			if (input[i] < '1' || input[i] > '4')
				return (0);
			clues[j++] = input[i] - '0';
		}
		else if (input[i] != ' ')
			return (0);
		i++;
	}
	if (j != 16)
		return (0);
	return (1);
}
