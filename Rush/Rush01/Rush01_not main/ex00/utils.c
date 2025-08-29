/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szholbol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 13:32:38 by szholbol          #+#    #+#             */
/*   Updated: 2025/08/17 13:32:45 by szholbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // For write()

// Writes a single character to the screen.
void	print_char(char c)
{
	write(1, &c, 1);
}

// Writes a whole string to the screen.
void	print_string(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		print_char(str[i]);
		i++;
	}
}
