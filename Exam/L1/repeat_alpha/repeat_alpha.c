/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szholbol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 19:48:36 by szholbol          #+#    #+#             */
/*   Updated: 2025/08/14 20:02:56 by szholbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int ft_count_letter (char c)
{
	int count;

	if(c>='A' && c<='Z')
		count=c-'A'+1;
	else if(c>='a' && c<='z')
		count= c-'a'+1;
	else
		count = 1;
	return (count);
}

int main (int argc, char **argv) 
{
	int repeat;
	if(argc == 2)
	{
		while(*argv[1]){
			repeat = ft_count_letter(*argv[1]);
			while(repeat--)
				write(1,argv[1],1);
			argv[1]++;		
		}
			
	}
	write(1,"\n",1);
	return (0);
}

