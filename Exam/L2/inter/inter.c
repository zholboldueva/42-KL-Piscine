/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szholbol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 11:51:26 by szholbol          #+#    #+#             */
/*   Updated: 2025/08/22 12:14:14 by szholbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>

void solve(  char*str1, char *str2)
{
	int i;
	int j;
	int ascii[256] = {0};

	i = 0;
	while (str2[i])
	{
		if (ascii[(int)str2[i]] == 0)
			ascii[(int) str2[i]]= 1;
		i++;
	}
	i = 0;
	j = 0;
	while (str1[i])
	{
		if (ascii[(int) str1[i]] == 1)
		{
			ascii[(int)str1[i]] = 2;
			write(1,&str1[i],1);
		}
		i++;
	}
}
int main(int argc, char ** argv)
{
	if(argc == 3)
		solve(argv[1],argv[2]);
	write(1,"\n", 1);
	return 0;
}

