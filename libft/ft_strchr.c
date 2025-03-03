/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: despanol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:16:09 by despanol          #+#    #+#             */
/*   Updated: 2024/10/13 21:03:36 by despanol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (*(str + i))
	{
		if (*(str + i) == (char)c)
			return ((char *)str + i);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)str + i);
	return (NULL);
}
/*
#include <stdio.h>
int main(void)
{
	char *src = "teste";
	
	printf("%s\n", ft_strchr(src, '\0'));
	printf("%s", src);
	
	return (0);
}
*/
