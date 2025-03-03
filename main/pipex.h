/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: despanol <despanol@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 20:25:16 by despanol          #+#    #+#             */
/*   Updated: 2025/02/03 20:25:18 by despanol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PIPEX_H
# define PIPEX_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <string.h>
# include <sys/wait.h>
# include "../libft/libft.h"

// pipex.c

void	child_x1(char **argv, char **envp, int *fd);
void	child_x2(char **argv, char **envp, int *fd);
void	execute(char *cmd, char **envp);
void	error(void);
char	*get_path(char *args, char **envp);
int		print_error(int error);
char	*get_path_aux(char *args, char **paths, int i);

#endif