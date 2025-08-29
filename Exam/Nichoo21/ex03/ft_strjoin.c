/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nichoo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 20:35:29 by nichoo            #+#    #+#             */
/*   Updated: 2025/08/21 18:55:30 by amamyrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	if (!str)
		return (0);
	while (str[len])
		len++;
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	dest_len;
	int	i;

	dest_len = ft_strlen(dest);
	i = 0;
	while (src[i])
		dest[dest_len++] = src[i++];
	dest[dest_len] = 0;
	return (dest);
}

void	ft_bzero(char **ptr, int total_len)
{
	int	i;

	i = 0;
	while (i <= total_len)
		(*ptr)[i++] = 0;
}

int	get_total_len(int size, char **strs, char *sep)
{
	int	total_len;
	int	sep_len;
	int	i;

	i = -1;
	total_len = 0;
	sep_len = ft_strlen(sep);
	while (++i < size)
	{
		total_len += ft_strlen(strs[i]);
		if (i < size - 1)
			total_len += sep_len;
	}
	return (total_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_len;
	int		i;
	char	*result;

	i = -1;
	total_len = get_total_len(size, strs, sep);
	result = malloc(sizeof(char) * (total_len + 1));
	ft_bzero(&result, total_len);
	while (++i < size)
	{
		result = ft_strcat(result, strs[i]);
		if (i < size - 1)
			result = ft_strcat(result, sep);
	}
	return (result);
}


int	main(int ac, char **av)
{
	char sep[] = ", ";
	char *str = ft_strjoin(ac, av, sep);
	for (int i = 0; i < ac; i++)
		printf("|%s|\n", av[i]);
	printf("Result:|%s|\n", str);
	free(str);
}

