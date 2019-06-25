/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mciupek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 14:42:41 by mciupek           #+#    #+#             */
/*   Updated: 2019/06/25 14:42:54 by mciupek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include "ft.h"

#define BUF_SIZE 1

int		ft_read(char *s)
{
	char	buff[BUF_SIZE];
	int		fd;

	fd = open(s, O_RDONLY);
	if (fd == -1)
		return (-1);
	while (read(fd, buff, BUF_SIZE))
		write(1, &buff, 1);
	close(fd);
	return (1);
}

int		main(int ac, char **av)
{
	if (ac < 2)
	{
		ft_putstr("File name missing.\n");
		return (0);
	}
	if (ac > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (0);
	}
	if (ft_read(av[1]) == -1)
	{
		ft_putstr("Cannot read file.\n");
		return (0);
	}
	return (1);
}
