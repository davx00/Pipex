/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: despanol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:02:03 by despanol          #+#    #+#             */
/*   Updated: 2024/10/13 21:08:34 by despanol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)(&str[i]));
		i--;
	}
	return (0);
}
/*
#include <stdio.h>

int main(void)
{
	char src[] = "abcdefg";
	
	printf("%s", ft_strrchr(src, 'e'));
	
	return (0);
}
*/
