/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: despanol <despanol@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:26:05 by despanol          #+#    #+#             */
/*   Updated: 2024/10/13 21:01:58 by despanol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
/*
#include <fcntl.h>

int main(void)
{
	int fd;
	
	fd = open("../fichero.txt", O_WRONLY);
	ft_putendl_fd("Capricos", fd);
	close(fd);
	return (0);
}
*/
