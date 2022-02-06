/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btekinli <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:02:36 by btekinli          #+#    #+#             */
/*   Updated: 2021/12/02 17:03:11 by btekinli         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_int(int max, int max2)
{
	ft_putchar(max / 10 + 48);
	ft_putchar(max % 10 + 48);
	ft_putchar(32);
	ft_putchar(max2 / 10 + 48);
	ft_putchar(max2 % 10 + 48);
	if (max != 98)
	{
		write(1, ", ", 2);
	}	
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = -1;
	while (++a <= 98)
	{
		b = a;
		while (++b <= 99)
		{
			ft_print_int(a, b);
		}
	}
}
