/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: despanol <despanol@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 12:03:55 by despanol          #+#    #+#             */
/*   Updated: 2024/10/13 20:52:38 by despanol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = 0;
		i++;
	}
}
/*
#include <stdio.h>
int main(void)
{
	char frase[] = "helouss";
	void *pointer = &frase;

	ft_bzero(pointer, 3);

	for(int i=0; i<7; i++)
	{
		printf("%c", frase[i]);
	}

	return (0);
}
*/
