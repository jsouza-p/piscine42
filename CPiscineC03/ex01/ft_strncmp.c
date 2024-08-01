/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 12:04:58 by jsouza-p          #+#    #+#             */
/*   Updated: 2024/07/30 15:53:32 by jsouza-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		else
			i++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	char	s1[] = "abc";
	char	s2[] = "azc";
	unsigned int	r;

	r = 3;
	r = ft_strncmp(s1, s2, r);
	printf("retorno : %d\n", r);
}*/
