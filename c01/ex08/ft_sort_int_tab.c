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

void	ft_sort_int_tab(int *tab, int size)
{
        int		counter;
        int		swap;

        counter = 0;
        while (counter < size - 1)
        {
            if (tab[counter] > tab[counter + 1])
            {
                swap = tab[counter];
                tab[counter] = tab[counter + 1];
                tab[counter + 1] = swap;
                counter = 0;
            }
            else
                counter ++;
        }
}