/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akilk <akilk@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 09:40:57 by akilk             #+#    #+#             */
/*   Updated: 2021/10/29 15:26:10 by akilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

#define BUF_SIZE 30

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*str != '\0')
	{
		length++;
		str++;
	}
	return (length);
}

void	exec_file(int fd)
{
	int		ret;
	char	buf[BUF_SIZE + 1];

	ret = read(fd, buf, BUF_SIZE);
	while (ret)
	{
		buf[ret] = '\0';
		write(1, buf, ft_strlen(buf));
		ret = read(fd, buf, BUF_SIZE);
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
