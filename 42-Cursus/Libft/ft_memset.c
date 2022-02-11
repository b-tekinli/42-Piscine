/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btekinli <btekinli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:25:21 by btekinli          #+#    #+#             */
/*   Updated: 2022/01/10 15:57:33 by btekinli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((char *)b)[i] = c;
		i++;
	}
	return (b);
}

/*
#include <stdio.h>
int main(){
	char dizi[] = "bilgisayar";	
    printf("dizi bellek içeriği: %s\n", dizi);

    ft_memset(dizi, 'x', 5);

	printf("dizi bellek içeriği: %s", dizi);

	return 0;
}
*/
