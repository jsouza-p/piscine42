/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:55:58 by jsouza-p          #+#    #+#             */
/*   Updated: 2024/07/17 18:41:15 by jsouza-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*str)
	{
	length++;
	str++;
	}
	return (length);
}
