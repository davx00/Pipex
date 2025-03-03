/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: despanol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 12:50:39 by despanol          #+#    #+#             */
/*   Updated: 2024/10/13 20:59:23 by despanol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned const char	*s;
	unsigned char		*d;
	size_t				i;

	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	i = 0;
	while (dst == src || !n)
	{
		return (dst);
	}
	while (n > i)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
/*
#include <stdio.h>

int main(void)
{
	char frase1[] = "Hola";
	char frase2[] = "como estas";

	printf("%s", (char*)ft_memcpy(frase1, frase2, 3));
	return (0);
}
*/
