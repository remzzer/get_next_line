/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrolland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 09:53:00 by rrolland          #+#    #+#             */
/*   Updated: 2020/09/09 16:43:39 by rrolland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		find_c(char *str)
{
	int		i;

	if (str != NULL && str[0])
	{
		i = 0;
		while (str[i])
		{
			if (str[i] == '\n')
				return (i);
			i++;
		}
	}
	return (-1);
}

int		split_store_in_line(char **store, char **line, int n)
{
	char	*temp;

	(*store)[n] = '\0';
	*line = ft_strdup(*store);
	temp = ft_strdup(*store + n + 1);
	free(*store);
	*store = temp;
	return (1);
}

int		get_next_line(int fd, char **line)
{
	int				r_read;
	int				n;
	char			buf[BUFFER_SIZE + 1];
	static char		*store[64];

	if ((fd < 0) || (BUFFER_SIZE <= 0) || (!line))
		return (-1);
	while ((r_read = read(fd, buf, BUFFER_SIZE)) > 0)
	{
		buf[r_read] = '\0';
		store[fd] = ft_strjoin(store[fd], buf);
		if ((n = find_c(store[fd])) >= 0)
			return (split_store_in_line(&store[fd], line, n));
	}
	if (r_read < 0)
		return (-1);
	if (store[fd] && (n = find_c(store[fd])) >= 0)
		return (split_store_in_line(&store[fd], line, n));
	else if (store[fd])
	{
		*line = store[fd];
		store[fd] = NULL;
		return (0);
	}
	*line = ft_strdup("");
	return (0);
}
