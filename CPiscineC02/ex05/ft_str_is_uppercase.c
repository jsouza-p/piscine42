/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 18:35:51 by jsouza-p          #+#    #+#             */
/*   Updated: 2024/07/22 18:47:05 by jsouza-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char*str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'A' && *str <= 'Z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*
int	ft_str_is_uppercase(char *str);

int	main(void)
{
    char str1[] = "ABCDE";
    char str2[] = "AbcDE";
    
    printf("%d\n", ft_str_is_uppercase(str1));
    printf("%d\n", ft_str_is_uppercase(str2));
    
    return (0);
}
*/
