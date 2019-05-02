/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshara <bshara@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/28 12:08:58 by chubaka358        #+#    #+#             */
/*   Updated: 2019/05/02 18:48:30 by bshara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int			ft_new_line(char **line, const int fd, char **s)
{
	int		len;
	char	*tmp;

	len = 0;
	while (s[fd][len] != '\n' && s[fd][len] != '\0')
	{
		len++;
	}
	if (len == 0)
		return (0);
	*line = ft_strsub(s[fd], 0, len);
	tmp = ft_strsub(s[fd], len, ft_strlen(s[fd]));
	ft_strdel(&s[fd]);
	s[fd] = tmp;
	return (1);
}

int			get_next_line(const int fd, char **line)
{
	printf("here");
    char		buf[BUFF_SIZE + 1];
	int			ret;
	static char	*s[255];
	char		*tmp;

	if (fd < 0 || !line || read(fd, buf, 0) < 0)
		return (-1);
	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		buf[ret] = '\0';
		if (s[fd] == NULL)
			s[fd] = ft_strnew(1);
		tmp = ft_strjoin(s[fd], buf);
		free(s[fd]);
		s[fd] = tmp;
		if (strchr(s[fd], '\n'))
			break;
	}
	if (ret == -1)
		return (-1);
	if ((ret == 0) && (buf[ret] == '\0'))
		return (0);
	return (ft_new_line(line, fd, s));
}