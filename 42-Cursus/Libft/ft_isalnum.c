/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btekinli <btekinli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 11:01:44 by btekinli          #+#    #+#             */
/*   Updated: 2022/01/13 11:33:52 by btekinli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

/*
#include <stdio.h>
#include <ctype.h>

int main(void) {
    char c1 = 'B', c2 = '7', c3 = '&';

    printf("%c alfanumerik bir karakter%s\n", c1, isalnum(c1) ? "dir!" : " değildir!");
    printf("%c alfanumerik bir karakter%s\n", c2, isalnum(c2) ? "dir!" : " değildir!");
    printf("%c alfanumerik bir karakter%s", c3, isalnum(c3) ? "dir!" : " değildir!");

    return 0;
}
*/