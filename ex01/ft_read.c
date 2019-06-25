/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mciupek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 22:50:30 by mciupek           #+#    #+#             */
/*   Updated: 2019/06/25 22:50:34 by mciupek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

#define BUF_SIZE 30000 

int		ft_read(char *s)
{
	char	buff[BUF_SIZE];
	int		fd;

	if ((fd = open(s, O_RDONLY)) < 0)
	{
		return (errno);
	}
	while (read(fd, buff, BUF_SIZE))
		ft_putstr(buff);
	close(fd);
	return (1);
}
