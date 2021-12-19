/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btekinli <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 16:07:05 by btekinli          #+#    #+#             */
/*   Updated: 2021/12/14 16:07:16 by btekinli         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	s;
	int	c;

	if (argc > 1)
	{
		s = 1;
		while (s < argc)
		{
			c = 0;
			while (argv[s][c])
				ft_putchar(argv[s][c++]);
			ft_putchar('\n');
			s++;
		}
	}
	return (0);
}
