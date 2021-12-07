/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btekinli <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 23:23:15 by btekinli          #+#    #+#             */
/*   Updated: 2021/12/07 23:23:20 by btekinli         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod( int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
			*div = a / b;
			*mod = a % b;
	}
}