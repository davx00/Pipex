/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: despanol <despanol@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 11:55:28 by despanol          #+#    #+#             */
/*   Updated: 2024/10/13 20:58:44 by despanol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_memcmp(const void *dst, const void *str, size_t n)
{
	unsigned char	*str2;
	unsigned char	*dst2;

	dst2 = (unsigned char *)dst;
	str2 = (unsigned char *)str;
	if (n)
		while (n--)
			if (*dst2++ != *str2++)
				return (*(--dst2) - *(--str2));
	return (0);
}
/*
#include <stdio.h>

int main(void)
{
	char s1[] = "abcd";
	char s2[] = "abcd";
	
	printf("%i", ft_memcmp(s1, s2, 10));
	
	return (0);
}
*/
