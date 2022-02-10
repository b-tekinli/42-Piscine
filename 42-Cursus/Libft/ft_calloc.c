/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btekinli <btekinli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:23:37 by btekinli          #+#    #+#             */
/*   Updated: 2022/01/13 11:27:37 by btekinli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*memory;
	size_t	i;

	memory = malloc(count * size);
	if (!memory)
		return (NULL);
	i = 0;
	while (i < count * size)
	{
		memory[i] = 0;
		i++;
	}
	return (memory);
}
/*
// belleği ayırır ve bayt değerlerini 0 ile doldurur.
int main(void)
{
    int *a;
    int  b;
    a = (int *) ft_calloc(10, sizeof(int));
    for (b=0; b<10; b++) {
        *(a+b) = (b+1) * 5;
        printf("%p adresindeki değer: %d\n", (a+b), *(a+b));
    }
    free(a);
}
*/