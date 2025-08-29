/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nichoo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 16:06:44 by nichoo            #+#    #+#             */
/*   Updated: 2025/08/21 18:47:31 by amamyrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*result;
	int	i;

	if (min >= max)
		return (NULL);
	result = malloc(sizeof(int) * (max - min));
	if (!result)
		return (NULL);
	i = 0;
	while (i < (max - min))
	{
		result[i] = min + i;
		i++;
	}
	return (result);
}

int	main(int ac, char **av)
{
	int *result;

	if (ac != 3)
		return 0;

	int min = atoi(av[1]);
	int max = atoi(av[2]);

	result = ft_range(min, max);
	for (int i = 0; i < (max - min); i++)
		printf("%d ", result[i]);
	printf("\n");
	printf("%p\n", result);
	free(result);
}
