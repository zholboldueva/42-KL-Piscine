/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szholbol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 09:55:51 by szholbol          #+#    #+#             */
/*   Updated: 2025/08/22 10:07:39 by szholbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_atoi(const char *str)
{
	int	sign;
	int	count;
	int	result;

	sign = 1;
	count = 0;
	result = 0;
	while (*str == 32|| (*str >=9 && *str<=13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if ( *str == '-')
			count++;
		str++;
	}
	if (count % 2 !=0)
		sign = -1;
	while(*str>='0' && *str<='9')
	{
		result = result* 10 + *str - '0';
		str++;
	}
	return (sign * r);
}

