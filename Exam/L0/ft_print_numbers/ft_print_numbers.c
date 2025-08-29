/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szholbol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 16:16:03 by szholbol          #+#    #+#             */
/*   Updated: 2025/08/14 16:18:57 by szholbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void ft_print_numbers(void)
{
	char c;

	c = '0';
	while (c<='9')
	{
		write(1,&c,1);
		c++;
	}
}
int main(void)
{
ft_print_numbers();
return (0);
}
