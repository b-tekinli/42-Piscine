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

<<<<<<< HEAD
int	  ft_atoi(const char *str)
=======
static	int	ft_isspace(int c)
{
	if (c == ' ' || c == '\r' || c == '\f' || c == '\v'
		|| c == '\n' || c == '\t')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
>>>>>>> fedf49fe06fd7bb77087667df1f4b7c5ededdfc5
{
	int		sign;
	long	res;

	res = 0;
	sign = 1;
<<<<<<< HEAD
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		++str;
=======
	while (ft_isspace(*str))
		str++;
>>>>>>> fedf49fe06fd7bb77087667df1f4b7c5ededdfc5
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = (res * 10) + (*str - '0');
		str++;
	}
	res = res * sign;
	if (res >= -2147483648 && res <= 2147483647)
		return (res);
	if (sign == -1)
		return (0);
	return (-1);
}

/*
#include <stdio.h>
int main(void)
{
	char *str;
	int p;

	str = "2147483648";
	p = ft_atoi(str);
	printf("%d", p);
	return (0);
}
<<<<<<< HEAD
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
=======
>>>>>>> fedf49fe06fd7bb77087667df1f4b7c5ededdfc5
*/