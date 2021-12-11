/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btekinli <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 14:14:12 by btekinli          #+#    #+#             */
/*   Updated: 2021/12/11 14:14:17 by btekinli         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	*a;
	char	*b;
	char	*c;
	a = "ABCDEFGHIJKLMNOPRSTUVWXYZ";
	b = "ABCDEFa";
	c = "";
	printf("%s = %d\n", a, ft_str_is_uppercase(a));
	printf("%s = %d\n", b, ft_str_is_uppercase(b));
	printf("%s = %d\n", c, ft_str_is_uppercase(c));
}*/