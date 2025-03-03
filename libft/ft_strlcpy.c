/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: despanol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:16:42 by despanol          #+#    #+#             */
/*   Updated: 2024/10/13 21:06:00 by despanol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <unistd.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	str;
	size_t	lon;

	lon = 0;
	lon = ft_strlen(src);
	if (dst != NULL && dstsize != 0)
	{
		str = 0;
		while ((str < lon) && str < (dstsize - 1))
		{
			dst[str] = src[str];
			str++;
		}
		dst[str] = '\0';
	}
	return (lon);
}
/*
#include <stdio.h>
int main(void)
{
	char src[] = "asd";
	char dest[] = "xxx";
	
	
	printf("%u\n", (unsigned int)ft_strlcpy(dest, src, 3));
	printf("%s", dest);
	
	return (0);
}
*/
