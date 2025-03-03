/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: despanol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 18:32:11 by despanol          #+#    #+#             */
/*   Updated: 2024/10/13 21:09:48 by despanol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>
#include <ctype.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	return (c);
}
/*
#include <stdio.h>
int main(void)
{
	char src[] = "ASD";
	
	printf("%c", ft_tolower(src[0]));
	printf("%s", src);
	
	return (0);
}
*/
