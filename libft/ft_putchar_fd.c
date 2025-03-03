/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: despanol <despanol@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:08:11 by despanol          #+#    #+#             */
/*   Updated: 2024/10/13 21:01:32 by despanol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd >= 0)
		write (fd, &c, 1);
}
/*
int main(void)
{
	int fd;
	
	fd = open("../fichero.txt", O_WRONLY);
	ft_putchar_fd('k', fd);
	return (0);
}
*/
