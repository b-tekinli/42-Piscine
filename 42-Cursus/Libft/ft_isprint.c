/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btekinli <btekinli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 11:19:34 by btekinli          #+#    #+#             */
/*   Updated: 2022/01/06 10:46:49 by btekinli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int main(void) {
    char c1 = 'H', c2 = '\t';

    printf("H yazdırılabilir bir karakter%s\n", isprint(c1) ? "dir!" : " değildir!");
    printf("\\t yazdırılabilir bir karakter%s", isprint(c2) ? "dir!" : " değildir!");

    return 0;
}
*/