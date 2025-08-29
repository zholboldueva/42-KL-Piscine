/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szholbol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 10:20:35 by szholbol          #+#    #+#             */
/*   Updated: 2025/08/15 10:29:16 by szholbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>

int main (int argc, char **argv)
{
	if(argc==4)
	{
		while(*argv[1]){
			if(argv[2][1]=='\0' && argv[3][1]=='\0')
				if(*argv[1] == *argv[2]){
				*argv[1]=*argv[3];
			}
			write(1,argv[1]++,1);
		}
	
	}
	write(1,"\n",1);
	return (0);
}

