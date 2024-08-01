/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 11:27:33 by jsouza-p          #+#    #+#             */
/*   Updated: 2024/07/23 11:48:57 by jsouza-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	char	*ptr;

	ptr = str;
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str = *str +32;
		}
		str++;
	}
	return (ptr);
}
/*
int     main(void)
{
char exemplo[] = "Exemplo de String Em Maiúsculas.";
    printf("String original: %s\n", exemplo);

    ft_strlowcase(exemplo);

    printf("String convertida para minúsculas: %s\n", exemplo);

    return 0;
}
*/
