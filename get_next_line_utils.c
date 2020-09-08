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

size_t		ft_strlen(const char *str)
{
	size_t		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char		*ft_strnew(int len)
{
	char	*str;
	int		i;

	i = 0;
	if (!(str = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (i < len)
	{
		str[i] = '\0';
		i++;
	}
	str[i] = '\0';
	return (str);
}

char		*ft_strdup(char *src)
{
	char	*dst;
	int		len;

	len = ft_strlen(src);
	if (!(dst = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	len = 0;
	while (src[len])
	{
		dst[len] = src[len];
		len++;
	}
	dst[len] = '\0';
	return (dst);
}

char		*ft_strjoin(char *s1, char *s2)
{
	size_t		i;
	size_t		j;
	char		*str;
	if (!(s1) && !(s2))
		return (NULL);
	if (!(s1))
		return (ft_strdup(s2));
	if (!(str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	free(s1);
	j = 0;
	while (s2[j])
	{
	str[i] = s2[j];
	i++;
	j++;
	}
	str[i] = '\0';
	return (str);
}
