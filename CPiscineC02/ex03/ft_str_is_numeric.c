/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 17:50:20 by jsouza-p          #+#    #+#             */
/*   Updated: 2024/07/22 18:16:48 by jsouza-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*
int ft_str_is_numeric(char *str);

int main() {
    char str1[] = "12345";
    char str2[] = "abc123";
    
    printf("%d\n", ft_str_is_numeric(str1)); Saída esperada: 1 (verdadeiro)
    printf("%d\n", ft_str_is_numeric(str2)); Saída esperada: 0 (falso)
    
    return 0;
}
*/
