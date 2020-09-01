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


int		find_c(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}
/*
int		is_store_empty(char *store)
{
	int		len;

	len = ft_strlen(store);
	if (len == 0)
	{
		return (1);
	}
	return (0);
}
*/
int		split_store_in_line(char **store, char **line, int n)
{
	char	*temp;

	*store[n] = '\0';
	*line = ft_strdup(*store);
	temp = ft_strdup(*store + n + 1);
	free(*store);
	*store = temp;
	free(temp);
	return (1);
}

int		get_next_line(int fd, char **line)
{
	int		r_read;
	int		n;
	char	buf[BUFFER_SIZE + 1];
	char	*store[64];

	if (read < 0 || fd < 0 || BUFFER_SIZE < 1 || !line)
		return (-1);
	while ((r_read = read(fd, buf, BUFFER_SIZE)) > 0)
	{
		buf[r_read] = '\0';
		store[fd] = ft_strjoin(store[fd], buf);
		if ((n = find_c(store[fd])) >= 0)
			return (split_store_in_line(&store[fd], line, n));
	}
	return (0);
}
