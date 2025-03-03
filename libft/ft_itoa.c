/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: despanol <despanol@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 15:54:47 by despanol          #+#    #+#             */
/*   Updated: 2024/10/13 20:57:25 by despanol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_character(int num)
{
	int	count;

	count = 0;
	if (num != 0)
	{
		if (num < 0)
		{
			num = num *(-1);
			count++;
		}
		while (num != 0)
		{
			num = num / 10;
			count++;
		}
	}
	else
		count = 1;
	return (count);
}

char	*ft_itoa(int n)
{
	int			lon;
	char		*str;
	long int	nbr;

	lon = count_character(n);
	nbr = n;
	str = malloc(sizeof(char) * (lon + 1));
	if (!str)
		return (0);
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	if (nbr == 0)
		str[0] = '0';
	str[lon--] = '\0';
	while (nbr)
	{
		str[lon] = ((nbr % 10) + '0');
		nbr /= 10;
		lon--;
	}
	return (str);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%s", ft_itoa(-123));
	return (0);
}
*/
