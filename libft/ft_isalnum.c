/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: despanol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:04:12 by despanol          #+#    #+#             */
/*   Updated: 2024/10/13 20:54:39 by despanol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

int	ft_isalnum(int alnum)
{
	if ((alnum >= 'A' && alnum <= 'Z')
		|| (alnum >= 'a' && alnum <= 'z')
		|| (alnum >= '0' && alnum <= '9'))
		return (1);
	return (0);
}
/*
#include <stdio.h>

int main(void)
{
	printf("%i", ft_isalnum('5'));
	return (0);
}
*/
