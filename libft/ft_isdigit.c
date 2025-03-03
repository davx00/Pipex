/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: despanol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:53:06 by despanol          #+#    #+#             */
/*   Updated: 2024/10/13 20:56:24 by despanol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

int	ft_isdigit(int digit)
{
	if (digit >= '0' && digit <= '9')
		return (1);
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%i", ft_isdigit('0'));
	return (0);
}
*/
