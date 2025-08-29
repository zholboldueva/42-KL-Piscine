/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szholbol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 15:07:07 by szholbol          #+#    #+#             */
/*   Updated: 2025/08/09 15:43:33 by szholbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	ft_rush(int x, int y, int i, int z)
{
	if (z == 0 && i == 0)
		ft_putchar('/');
	else if (z == 0 && i == x - 1)
		ft_putchar('\\');
	else if (z == y - 1 && i == 0)
		ft_putchar('\\');
	else if (z == y - 1 && i == x - 1)
		ft_putchar('/');
	else if (z == 0 || i == x - 1 || z == y - 1 || i == 0)
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	z;
	int	i;

	if (x <= 0 || y <= 0)
		return ;
	z = 0;
	while (z < y)
	{
		i = 0;
		while (i < x)
		{
			ft_rush(x, y, i, z);
			i++;
		}
		ft_putchar('\n');
		z++;
	}
	ft_putchar('\n');
}
