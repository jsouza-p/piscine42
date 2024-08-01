/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 15:49:37 by jsouza-p          #+#    #+#             */
/*   Updated: 2024/07/30 16:27:46 by jsouza-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*
#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

 int	main(void)
 {
 char dest[50] = "Hello, ";
 char src[] = "World!";
 unsigned int nb = 126;

 printf("%s\n", dest);
 ft_strncat(dest, src, nb);
 printf("%s\n", dest);

 return 0;
 }*/
