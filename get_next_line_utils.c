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
/*
size_t		ft_strlcpy(char *dst, const char *src, size_t dst_size)
{
	size_t		i;

	if (!src || !dst)
		return (0);
	if (dst_size == 0)
		return (ft_strlen(src));
	i = 0;
	while (i < dst_size - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
*/
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

char		*ft_strdup(const char *src)
{
	char	*dst;
	size_t	len;
	size_t	i;

	len = ft_strlen(src);
	i = 0;
	dst = malloc(sizeof(*dst) * (len + 1));
	if (!dst)
		return (NULL);
	while (i < len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	size_t		i;
	size_t		j;
	char		*str;
	(void)s2;
	if (!s1)
		printf("ERROR, s1 existe pas");
	if (!s2)
		printf("ERROR S2");
		//return (NULL);
	if (!(str = malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2)) + 1))
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
	str[i] = s2[j];
	i++;
	j++;
	}
	str[i] = '\0';
	return ("uol");
}
