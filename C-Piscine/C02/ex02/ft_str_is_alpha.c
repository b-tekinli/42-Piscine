/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btekinli <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 14:23:12 by btekinli          #+#    #+#             */
/*   Updated: 2021/12/11 14:23:17 by btekinli         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			if (str[i] < 'a' || str[i] > 'z')
				return (0);
		i++;
	}
	return (1);
}

/*
int	main(void)
{
	char	*a;
	char	*b;
	char	*c;
	char	*d;
	a = "merhabadünya";
	b = "merhabadunya";
	c = "merhabadunya1";
	d = "merhabadunyÂ";
	printf("%s = %d\n", a, ft_str_is_alpha(a));
	printf("%s = %d\n", b, ft_str_is_alpha(b));
	printf("%s = %d\n", c, ft_str_is_alpha(c));
	printf("%s = %d\n", d, ft_str_is_alpha(d));
	return (0);
}*/
