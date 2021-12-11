/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btekinli <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 14:47:12 by btekinli          #+#    #+#             */
/*   Updated: 2021/12/11 14:47:17 by btekinli         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}

/*
int	main(void)
{
	char	a[] = "abcdegSADASDijklmnoprstuvwxyz";
	char *p_a;
	p_a = ft_strupcase(a);
	printf("değiştirilmiş hali: %s\n", p_a);
}*/