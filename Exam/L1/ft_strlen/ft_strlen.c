/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szholbol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 19:37:43 by szholbol          #+#    #+#             */
/*   Updated: 2025/08/14 19:44:21 by szholbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int ft_strlen(char *str){
	int l;

	l=0;
	while(*str)
	{
		l++;
		str++;
	}
	return (l);
}
#include <stdio.h>
#include <string.h>

int main(void)
{
printf("%lu\n",strlen("hello"));
printf("%d\n",ft_strlen("hello"));
return (0);
}
