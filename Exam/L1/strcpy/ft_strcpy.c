/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szholbol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 19:12:34 by szholbol          #+#    #+#             */
/*   Updated: 2025/08/14 19:30:54 by szholbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char *ft_strcpy(char *s1, char *s2)
{
	int i;

	i=0;
	while(s1[i])
	{
		s1[i]=s2[i];
		i++;	
	}
	s1[i]='\0';
	return s1;
}
#include <stdio.h>
#include <string.h>
int main (void)
{
char src[10]="hello";
char dst[10]="helloch";
printf("%s\n",ft_strcpy(dst,src));
printf("%s\n",strcpy(dst,src));
}
