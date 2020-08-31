/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrolland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 09:53:00 by rrolland          #+#    #+#             */
/*   Updated: 2020/08/07 13:02:57 by rrolland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#define BUFSIZE 10

int		main(void)
{
	int		fd;
	int		r_read;
	char buf[BUFSIZE + 1];

	fd = open("test_empty.txt", O_RDONLY);
	//fd = open("test.txt", O_RDONLY);
	if (fd == -1)
	{
		ft_putstr_fd("open() fail", 1);
		return (1);
	}
	//r_read = read(fd, buf, BUFSIZE);
	while ((r_read = read(fd, buf, BUFSIZE)))
	{
		buf[r_read] = '\0'; //fin de char apres longueur de r_read (BUFSIZE)
		ft_putstr_fd(buf, 1); //print contenu de buf
		ft_putnbr_fd(r_read, 1); //Nombre d'octet 
	}
	buf[BUFSIZE] = '\0';
	ft_putnbr_fd(r_read, 1); //Nombre d'octet lus au total
	if (close(fd) == -1)
	{
		ft_putstr_fd("close() fail", 1);
		return (1);
	}
	return (0);
}
