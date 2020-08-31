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

int		split_store_in_line(char **store, char **line, int n)
{
	char	*temp;

	*store[n] = '\0';
	*line = ft_strdup(*store);
	temp = ft_strdup(*store + n + 1);

}

int		get_next_line(int fd, char **line)
{
	
}
