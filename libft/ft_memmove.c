/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: despanol <despanol@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 12:03:07 by despanol          #+#    #+#             */
/*   Updated: 2024/10/13 21:00:00 by despanol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

void	*ft_memmove(void *str1, const void *srt2, size_t n)
{
	unsigned char		*p_str1;
	unsigned const char	*p_str2;

	if (str1 < srt2)
		return (ft_memcpy(str1, srt2, n));
	p_str1 = (unsigned char *)str1;
	p_str2 = (unsigned const char *)srt2;
	if (!n || str1 == srt2)
		return (str1);
	while (n--)
		p_str1[n] = p_str2[n];
	return (str1);
}
/*
#include <stdio.h>
int main(void)
{
	char src[5] = "";
	char dest[10] = "";
	
	
	printf("%s", (char*)ft_memmove(dest, src, 5));
	
	return (0);
}
*/
