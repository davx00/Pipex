/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: despanol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 19:07:07 by despanol          #+#    #+#             */
/*   Updated: 2024/10/13 21:07:21 by despanol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t c)
{
	size_t			i;
	unsigned int	p;

	p = 0;
	i = 0;
	while ((s1[i] != '\0') && (s2[i] != '\0') && (p == 0) && (i < c))
	{
		p = ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if ((p == 0) && (i < c))
		p = ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (p);
}
/*
#include <stdio.h>

int main(void)
{
	char s1[] = "as\nd";
	char s2[] = "as\0d";
	
	printf("%i", ft_strncmp("abcdef", "abc\375xx", 5));
	
	return (0);
}
*/
