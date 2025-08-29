/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szholbol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 10:17:56 by szholbol          #+#    #+#             */
/*   Updated: 2025/08/22 10:49:18 by szholbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int ft_strlen(char *str)
{
	int i;
	i = 0;
	while(str[i])
		i++;
	return (i);
}

char *ft_strdup(char *src)
{
	char	*cpy;
	int	i;
	
	i = 0;
	cpy = malloc (sizeof(char) *(ft_strlen(src)+1));
	if (!cpy)
		return (NULL);
	while (src[i])
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = 0;
	return (cpy);
}
#include <stdio.h>
#include <string.h>
int main(void)
{
	char *ptr = ft_strdup("Bahaha");
	char *ptr2 = strdup("Bahaha");
	printf("%s\n", ptr);
	printf("%s\n", ptr2);
	free(ptr);
}


