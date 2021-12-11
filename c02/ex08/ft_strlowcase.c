/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btekinli <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 14:34:12 by btekinli          #+#    #+#             */
/*   Updated: 2021/12/11 14:34:17 by btekinli         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

/*
int	main(void)
{
	char	a[] = "ABd/()/()&(dfdfdfCDEFGHIJKLMNOPRSTUVWXYZ";
	char *p_a;
	p_a = ft_strlowcase(a);
	printf("değiştirilmiş hali: %s\n", p_a);
	return 0;
}*/