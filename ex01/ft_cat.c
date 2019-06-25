/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mciupek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 17:43:27 by mciupek           #+#    #+#             */
/*   Updated: 2019/06/25 23:09:18 by mciupek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		main(int ac, char **av)
{
	int i;
	char buff;

	i = 1;
	if (ac > 1)
	{
		while (i < ac)
		{
			ft_read(av[i]);
			if (errno)
			{
				ft_putstr(basename(av[0]));
				ft_putstr(": ");
				ft_putstr(av[i]);
				ft_putstr(": ");
				ft_putstr(strerror(errno));
				ft_putstr("\n");
			}
			i++;
		}
	}
	if (ac == 1)
	{
		while (read(STDIN_FILENO, &buff, 1) >= 0)
			ft_putstr(&buff);
	}
	return (0);
}
