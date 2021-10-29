/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akilk <akilk@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 09:40:57 by akilk             #+#    #+#             */
/*   Updated: 2021/10/29 14:41:21 by akilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

#define BUF_SIZE 30000

void	exec_file(int fd)
{
	int		i;
	int		ret;
	char	buf[BUF_SIZE + 1];

	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	i = 0;
	while (buf[i] != '\0')
	{
		write(1, &buf[i], 1);
		i++;
	}
}

int	argc_error_handling(int argc)
{
	if (argc == 1)
	{
		write(2, "File name missing.\n", 20);
		return (1);
	}
	else if (argc > 2)
	{
		write(2, "Too many arguments.\n", 21);
		return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	fd;

	if (argc_error_handling(argc))
		return (0);
	fd = open(argv[1], O_RDONLY);
	if (fd > 0)
		exec_file(fd);
	else
	{
		write(2, "open() error.\n", 15);
		return (1);
	}
	if (close(fd) == -1)
	{
		write(2, "close() error.\n", 16);
		return (1);
	}
	return (0);
}
