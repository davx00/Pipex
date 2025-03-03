/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: despanol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:16:28 by despanol          #+#    #+#             */
/*   Updated: 2024/10/13 21:05:34 by despanol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	longdst;
	size_t	longsrc;
	size_t	conta;

	longdst = ft_strlen(dst);
	longsrc = ft_strlen(src);
	if (dstsize <= longdst)
		return (longsrc + dstsize);
	conta = longdst;
	while (*src != '\0' && conta < (dstsize - 1))
		*(dst + conta++) = *src++;
	*(dst + conta) = '\0';
	return (longdst + longsrc);
}
/*
#include <stdio.h>
int main(void)
{
	char src[20] = "defy456";
	char dest[20] = "abcx123";

	ft_strlcat(dest, src, 13);
	printf("%s\n", dest);
	size_t cont;
	
	cont = 0;
	while ( dest[cont] != '\0' ) 
	{
		printf("%c", dest[cont]);
		cont++;
	}
	
	return (0);
}
*/
