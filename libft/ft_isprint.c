/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: despanol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 12:14:09 by despanol          #+#    #+#             */
/*   Updated: 2024/10/13 20:56:54 by despanol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int print)
{
	if (print >= 32 && print <= 126)
		return (1);
	return (0);
}
/*
#include <stdio.h>

int main(void)
{
	printf("%i", ft_isprint(35));
	return (0);
}
*/
