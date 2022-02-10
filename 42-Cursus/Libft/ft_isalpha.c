/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btekinli <btekinli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 11:07:41 by btekinli          #+#    #+#             */
/*   Updated: 2022/01/06 10:46:15 by btekinli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

/*
#include <stdio.h>
#include <ctype.h>

int main(void) {
    char c1 = 'h', c2 = '4';

    printf("%c alfabetik bir karakter%s\n", c1, isalpha(c1) ? "dir!" : " değildir!");
    printf("%c alfabetik bir karakter%s\n", c2, isalpha(c2) ? "dir!" : " değildir!");

    return 0;
}
*/