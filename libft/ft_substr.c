/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: despanol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 15:56:59 by despanol          #+#    #+#             */
/*   Updated: 2024/10/13 21:09:24 by despanol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	sleng;

	if (!s)
		return (NULL);
	sleng = ft_strlen(s);
	if (start >= sleng)
	{
		return (ft_strdup(""));
	}
	if (len > sleng - start)
		len = sleng - start;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%s", ft_substr("Hola world", 3, 10));
	return (0);
}
*/
