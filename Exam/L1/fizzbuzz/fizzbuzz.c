/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szholbol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 12:49:46 by szholbol          #+#    #+#             */
/*   Updated: 2025/08/15 12:55:28 by szholbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int main(void)
{
	int i;
	char n[4];

	i = 0;
	while(i<=100)
	{
	  if(i%3==0)
		  write(1,"fizz\n",5);
	  else if(i%5==0)
		write(1, "buzz\n", 5);
	  else if(i%15==0)
		  write(1, "fizzbuzz\n", 9);
	  else
	  {
	  	 n='0'+i;
	 	 write(1,&n,1);
		  write(1,"\n",1);
	  }
	  		
		  
	  i++;
	}
	
	return (0);
}

