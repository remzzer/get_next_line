/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrolland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 10:52:18 by rrolland          #+#    #+#             */
/*   Updated: 2020/08/07 13:02:17 by rrolland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		main(void)
{
	int		fd;

	fd = open("test.txt", O_WRONLY | O_CREAT | O_APPEND, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		ft_putstr_fd("opening_failed", 1);
		return (1);
	}
	ft_putnbr_fd(fd, 1);
	ft_putstr_fd("Helloworld", fd);
	if (close(fd) == -1)
	{
		ft_putstr_fd("closing failed", 1);
		return (1);
	}
	return (0);
}
