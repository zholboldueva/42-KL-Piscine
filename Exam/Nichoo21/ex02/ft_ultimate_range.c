/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nichoo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 17:26:09 by nichoo            #+#    #+#             */
/*   Updated: 2025/08/21 18:51:47 by amamyrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	size = max - min;
	*range = malloc(sizeof(int) * size);
	if (!*range)
	{
		*range = NULL;
		return (0);
	}
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size);
}


int main(int ac, char **av)
{
	if (ac != 3)
		return (0);
	int min = atoi(av[1]);
	int max = atoi(av[2]);
	int *range;

	int res = ft_ultimate_range(&range, min, max);
	for (int i = 0; i < (max - min); i++)
			printf("%d\n", range[i]);
	printf("%p\n", range);
	printf("res:%d\n", res);
	free(range);
}

