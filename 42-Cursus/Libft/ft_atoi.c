/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btekinli <btekinli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:21:26 by btekinli          #+#    #+#             */
/*   Updated: 2022/02/10 15:37:46 by btekinli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	  ft_atoi(const char *str)
{
	int		sign;
	long	res;

	res = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		++str;
	if (*str == '+' || *str == '-')
		if (*(str++) == '-')
			sign *= -1;
	while (ft_isdigit(*str))
	{
		res = (res * 10) + sign * (*str++ - '0');
		if (res > __INT_MAX__)
			return (-1);
		else if (res < -__INT_MAX__ - 1)
			return (0);
	}
	return (res);
}
/*
#include <stdio.h>
int main(void)
{
	char *str;
	int p;

	str = "-2147483648";
	p = ft_atoi(str);
	printf("%d", p);
	return (0);

	// Str parametresi ile gösterilen karakter dizisini int bir değere çevirir. 
	// Önce boşluk karakteri içermeyen ilk karakteri bulana kadar boşluk atlar. 
	// Sonra, bu karakterden başlayarak, int değer içeriğine benzeyen karakterleri
	// sayısal değerlere çevirir.
}
*/