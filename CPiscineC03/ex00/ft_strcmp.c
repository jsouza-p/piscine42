/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:14:05 by jsouza-p          #+#    #+#             */
/*   Updated: 2024/07/30 15:50:14 by jsouza-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
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
	char	s1[] = {"abcd"};
	char	s2[] = {"abcd"};
	int		r;
	r = ft_strcmp(s1, s2);
	printf("retorno : %d\n", r);
}*/
