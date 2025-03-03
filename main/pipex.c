/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: despanol <despanol@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 20:22:20 by despanol          #+#    #+#             */
/*   Updated: 2025/02/03 20:22:24 by despanol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	child_x1(char **argv, char **envp, int *fd)
{
	int	infile;

	infile = open(argv[1], O_RDONLY);
	if (infile < 0)
		error();
	dup2(infile, STDIN_FILENO);
	dup2(fd[1], STDOUT_FILENO);
	close(fd[0]);
	close(fd[1]);
	if (ft_strlen(argv[2]) == 0)
		return ;
	execute(argv[2], envp);
}

void	child_x2(char **argv, char **envp, int *fd)
{
	int	outfile;

	outfile = open(argv[4], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (outfile < 0)
		error();
	dup2(fd[0], STDIN_FILENO);
	dup2(outfile, STDOUT_FILENO);
	close(fd[0]);
	close(fd[1]);
	if (ft_strlen(argv[3]) == 0)
		return ;
	execute(argv[3], envp);
}

int	main(int argc, char **argv, char **envp)
{
	int		fd[2];
	pid_t	pid1;
	pid_t	pid2;
	int		status;

	status = 0;
	if (argc != 5)
		return (print_error(1), print_error(2), EXIT_FAILURE);
	if (pipe(fd) < 0)
		error();
	pid1 = fork();
	if (pid1 < 0)
		error();
	if (pid1 == 0)
		child_x1(argv, envp, fd);
	pid2 = fork();
	if (pid2 < 0)
		error();
	if (pid2 == 0)
		child_x2(argv, envp, fd);
	close(fd[0]);
	close(fd[1]);
	waitpid(pid1, &status, 0);
	waitpid(pid2, &status, 0);
	return (WEXITSTATUS(status));
}
