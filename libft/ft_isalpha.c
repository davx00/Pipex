/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: despanol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 13:57:46 by despanol          #+#    #+#             */
/*   Updated: 2024/10/13 20:55:28 by despanol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

int	ft_isalpha(int alpha)
{
	if ((alpha >= 'A' && alpha <= 'Z')
		|| (alpha >= 'a' && alpha <= 'z'))
		return (1);
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%i", ft_isalpha('L'));
	return (0);
}
*/
