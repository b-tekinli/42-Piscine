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

void	ft_rev_int_tab(int *tab, int size)
{
        int		a;
        int		b;
        int	    swap;

        a = 0;
        b = size - 1;
        while (a < (size / 2))
        {
                swap = tab[a];
                tab[a] = tab[b];
                tab[b] = swap;
                a++;
                b--;
        }
}