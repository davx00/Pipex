/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: despanol <despanol@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 20:04:36 by despanol          #+#    #+#             */
/*   Updated: 2024/10/13 20:54:06 by despanol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <string.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;

	result = malloc(count * size);
	if (!result)
		return (NULL);
	else
	{
		ft_bzero(result, (count * size));
		return (result);
	}
}
/*
#include <stdio.h>

int main(void)
{
	int *array;

	array = (int *) ft_calloc(5, sizeof(int));

	array[0] = 10;
	array[1] = 20;
	array[2] = 30;
	array[3] = 40;
	array[4] = 50;

	printf("%i\n", array[0]);
	printf("%i\n", array[1]);
	printf("%i\n", array[2]);
	printf("%i\n", array[3]);
	printf("%i\n", array[4]);



	char *frase;

	frase = (char *) ft_calloc(5, sizeof(char));

	frase[0] = 'a';
	frase[1] = 'b';
	frase[2] = 'c';
	frase[3] = 'd';
	frase[4] = 'e';

	printf("\n%s", frase);
	return (0);
}
*/
