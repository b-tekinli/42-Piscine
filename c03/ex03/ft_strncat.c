/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btekinli <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 01:50:12 by btekinli          #+#    #+#             */
/*   Updated: 2021/12/13 01:50:17 by btekinli         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	lenght;

	i = 0;
	lenght = 0;
	while (dest[lenght] != '\0')
		lenght++;
	while (i < nb && src[i] != '\0')
	{
		dest[lenght] = src[i];
		lenght++;
		i++;
	}
	dest[lenght] = '\0';
	return (dest);
}