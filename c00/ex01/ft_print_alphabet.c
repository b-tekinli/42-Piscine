/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btekinli <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 14:40:39 by btekinli          #+#    #+#             */
/*   Updated: 2021/12/02 14:43:37 by btekinli         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(char alp)
{
	alp = 'a';
	while (alp <= 'z')
	{
		ft_putchar(alp);
		alp++;
	}
}
