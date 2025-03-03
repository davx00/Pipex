/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: despanol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:34:00 by despanol          #+#    #+#             */
/*   Updated: 2024/10/13 21:08:01 by despanol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	l;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		l = 0;
		while (little[l] && i + l < len && big[i + l] == little[l])
			l++;
		if (!little[l])
			return ((char *)(big + i));
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int main(void)
{
char s1[] = "abba";
char s2[] = "cddc";

printf("%s", ft_strnstr(s1, s2, 1));

return (0);
}
*/
