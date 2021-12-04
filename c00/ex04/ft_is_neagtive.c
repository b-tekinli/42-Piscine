/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_neagtive.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btekinli <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:41:55 by btekinli          #+#    #+#             */
/*   Updated: 2021/12/02 15:42:26 by btekinli         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	pozitif;
	char	negatif;

	pozitif = 'P';
	negatif = 'N';
	if (n < 0)
	{
		write(1, &negatif, 1);
	}
	else
	{
		write(1, &pozitif, 1);
	}
}
