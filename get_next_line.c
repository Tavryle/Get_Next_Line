/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmansing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 13:41:36 by tmansing          #+#    #+#             */
/*   Updated: 2019/09/07 15:34:44 by tmansing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

char		*ft_assign(char *ptr, char **line)
{
	char	*holder;
	char	*newline;

	newline = ft_strchr(ptr, '\n');
	if (newline)
	{
		*newline = '\0';
		*line = ft_strdup(ptr);
		holder = ptr;
		ptr = ft_strdup(newline + 1);
		ft_strdel(&holder);
	}
	else
	{
		*line = ft_strdup(ptr);
		ft_strdel(&ptr);
	}
	return (ptr);
}

int			reads(int fd, char **ptr)
{
	char	buff[BUFF_SIZE + 1];
	int		read_value;
	char	*store;

	ft_bzero(buff, BUFF_SIZE + 1);
	while ((read_value = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[read_value] = '\0';
		if (!(ptr[fd]))
			ptr[fd] = ft_strnew(0);
		store = ft_strjoin(ptr[fd], buff);
		ft_strdel(&ptr[fd]);
		ptr[fd] = store;
		if (ft_strchr(ptr[fd], '\n'))
			break ;
	}
	return (read_value);
}

int			get_next_line(const int fd, char **line)
{
	static char		*ptr[MAXFD];
	int				ret;

	if (fd < 0 || read(fd, NULL, 0) < 0 || !line || fd > MAXFD)
		return (-1);
	ret = reads(fd, ptr);
	if (ret < 0)
		return (-1);
 	if (ret == 0 && ((!(ptr[fd])) || (!(ptr[fd][0]))))
		return (0);
	ptr[fd] = ft_assign(ptr[fd], line);
	return (1);
}
