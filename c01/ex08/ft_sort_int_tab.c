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

void	ft_sort_int_tab(int *tab, int size)
{
	int		sayac;
	int		swap;

	sayac = 0;
	while (sayac < size - 1)
	{
		if (tab[sayac] > tab[sayac + 1])
		{
			swap = tab[sayac];
			tab[sayac] = tab[sayac + 1];
			tab[sayac + 1] = swap;
			sayac = 0;
		}
		else
			sayac ++;
	}
}
