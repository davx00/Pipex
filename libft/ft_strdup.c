/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: despanol <despanol@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 21:05:21 by despanol          #+#    #+#             */
/*   Updated: 2024/10/13 21:04:04 by despanol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		size;

	size = ft_strlen(s1);
	ptr = malloc(sizeof(char) * (size + 1));
	if (ptr == NULL)
		return (NULL);
	ft_memcpy(ptr, s1, size);
	ptr[size] = '\0';
	return (ptr);
}
/*
#include <stdio.h>
int main(void)
{
	char frase1[] = "Hola";
	char *frase2 = strdup(frase1);
	frase1[0] = 'X';

	printf("%s", frase2);
	return (0);
}
*/
