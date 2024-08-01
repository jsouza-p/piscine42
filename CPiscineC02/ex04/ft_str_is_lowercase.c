/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 18:19:52 by jsouza-p          #+#    #+#             */
/*   Updated: 2024/07/22 18:34:32 by jsouza-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'a' && *str <= 'z'))
		{
			return (0);
		}
	str++;
	}
	return (1);
}
/*
int ft_str_is_lowercase(char *str);

int main()
{
    char str1[] = "abcdef";
    char str2[] = "abc123";
    
    printf("%d\n", ft_str_is_lowercase(str1));
    printf("%d\n", ft_str_is_lowercase(str2));
    
    return [0];
}
*/
