/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrolland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 10:55:58 by rrolland          #+#    #+#             */
/*   Updated: 2020/08/07 10:10:47 by rrolland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFFER_SIZE 3

size_t		ft_strlen(const char *str);
char		*ft_strdup(char *src);
char		*ft_strjoin(char *s1, char *s2);
char		*ft_strnew(int len);
size_t		ft_strlcpy(char *dst, const char *src, size_t dst_size);
int			get_next_line(int fd, char **line);

#endif
