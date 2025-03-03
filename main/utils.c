/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: despanol <despanol@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 08:50:13 by despanol          #+#    #+#             */
/*   Updated: 2025/02/04 08:50:17 by despanol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	error(void)
{
	perror("Error");
	exit(EXIT_FAILURE);
}

char	*get_path(char *args, char **envp)
{
	int		i;
	char	*path;
	char	**paths;

	i = 0;
	if (ft_strchr(args, '/') != NULL)
		return (args);
	while (ft_strnstr(envp[i], "PATH=", 5) == NULL)
		i++;
	if (!envp[i])
		return (NULL);
	paths = ft_split(envp[i] + 5, ':');
	i = 0;
	path = get_path_aux(args, paths, i);
	if (path)
		return (path);
	i -= 1;
	while (paths[++i])
		free(paths[i]);
	free(paths);
	return (0);
}

void	execute(char *argv, char **envp)
{
	char	**args;
	char	*path;
	int		i;

	i = 0;
	i -= 1;
	args = ft_split(argv, ' ');
	path = get_path(args[0], envp);
	if (!path)
	{
		while (args[++i])
			free(args[i]);
		free(args);
		perror("Error");
		exit(127);
	}
	if (execve(path, args, envp) == -1)
		error();
}

int	print_error(int error)
{
	if (error == 1)
		ft_putstr_fd("Error: wrong number of arguments\n", 2);
	else if (error == 2)
		ft_putstr_fd("Usage: ./pipex file1 cmd1 cmd2 file2\n", 2);
	return (0);
}

char	*get_path_aux(char *args, char **paths, int i)
{
	char	*half_path;
	char	*path;

	while (paths[i])
	{
		half_path = ft_strjoin(paths[i], "/");
		path = ft_strjoin(half_path, args);
		free(half_path);
		if (access(path, F_OK) == 0)
			return (path);
		free(path);
		i++;
	}
	return (NULL);
}
