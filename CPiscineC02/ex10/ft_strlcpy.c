/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 12:47:18 by jsouza-p          #+#    #+#             */
/*   Updated: 2024/07/23 12:47:30 by jsouza-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	c;

	c = 0;
	if (size == 0)
	{
		*dest = '\0';
		while (src[c] != '\0')
		{
			c++;
		}
		return (c);
	}
	while (c < size - 1 && src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	while (src[c] != '\0')
	{
		c++;
	}
	return (c);
}

/*
int	main(void)
{
	char			src[] = "Hello";
	char			dest[6];
	unsigned int	size;

	size = 6;
	ft_strlcpy(dest, src, size);
	printf("%s\n", dest);
	printf("%d\n", ft_strlcpy(dest, src, size));
}
*/
