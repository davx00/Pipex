/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: despanol <despanol@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:13:27 by despanol          #+#    #+#             */
/*   Updated: 2024/10/13 21:02:57 by despanol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i] && fd >= 0)
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
/*
int main(void)
{
	int fd;
	
	fd = open("../fichero.txt", O_WRONLY);
	ft_putstr_fd("Hola como estas !", fd);
	return (0);
}
*/
