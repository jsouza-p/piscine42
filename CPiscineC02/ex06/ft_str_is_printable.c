/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 18:11:08 by jsouza-p          #+#    #+#             */
/*   Updated: 2024/07/23 18:14:58 by jsouza-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str != 0)
	{
		if (!(*str >= 32 && *str <= 126))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*
int	main(void)
{
    char str[]= "hello, world!";
    char str2[]= {31};
    char str3[]= "hello, world!*&$#@sSWDJ";
    char str4[]= "\t";
    char str5[]= "\n";

    printf("%d\n", ft_str_is_printable(str));
    printf("%d\n", ft_str_is_printable(str2));
    printf("%d\n", ft_str_is_printable(str3));
    printf("%d\n", ft_str_is_printable(str4));
    printf("%d\n", ft_str_is_printable(str5));
}
*/