/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: despanol <despanol@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 12:03:41 by despanol          #+#    #+#             */
/*   Updated: 2024/10/13 21:00:26 by despanol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*a;
	size_t			i;

	i = 0;
	a = s;
	while (i < n)
	{
		a[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*
#include <stdio.h>

int main(void)
{
	char frase[] = "Saludos";
	void *pointer = &frase;

	ft_memset(pointer, 65, 8);
	printf("%s", frase);

	printf("%c", *(char*)pointer); TIENE QUE ESTAR COMENTADO, ES OTRA OPCIÓN
	return (0);
}
*/
