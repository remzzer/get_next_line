/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrolland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 10:54:23 by rrolland          #+#    #+#             */
/*   Updated: 2020/08/07 11:24:58 by rrolland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *str)
{
	size_t		i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	num;
	char	c;

	num = n;
	if (num < 0)
	{
		ft_putchar_fd('-', fd);
		num = -num;
	}
	if (num > 9)
		ft_putnbr_fd(num / 10, fd);
	c = num % 10 + 48;
	ft_putchar_fd(c, fd);
}

void	ft_putstr_fd(char *str, int fd)
{
	if (str == NULL)
	{
		return ;
	}
	write(fd, &str[0], ft_strlen(str));
}
