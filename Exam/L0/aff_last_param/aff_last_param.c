/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szholbol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 17:09:12 by szholbol          #+#    #+#             */
/*   Updated: 2025/08/14 17:19:53 by szholbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int main(int argc, char **argv){
if(argc>1){
char *last_arg = argv[argc-1];
while(*last_arg)
	write(1,last_arg++,1);
}
write(1,"\n",1);
return (0);
}

