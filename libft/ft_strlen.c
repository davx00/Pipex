/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: despanol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 12:45:20 by despanol          #+#    #+#             */
/*   Updated: 2024/10/13 21:06:28 by despanol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *str)
{
	size_t	strlen;

	if (str == NULL)
		return (0);
	strlen = 0;
	while (str[strlen] != '\0')
		strlen++;
	return (strlen);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%lu", ft_strlen(""));
	return (0);
}
*/
