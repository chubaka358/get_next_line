/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshara <bshara@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/28 12:08:58 by chubaka358        #+#    #+#             */
/*   Updated: 2019/05/02 15:51:32 by bshara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int			ft_new_line(char **line, const int fd, char **s)
{
	
}

int			get_next_line(const int fd, char **line)
{
    char	buf[BUFF_SIZE + 1];
	int		len;
	char	*s[255];
	char	*tmp;

	if (fd < 0 || !line || read(fd, buf, 0) < 0)
		return (-1);
	while ((len = read(fd, buf, BUFF_SIZE)))
	{
		buf[len] = '\0';
		if (s[fd] == NULL)
			s[fd] = ft_strnew(1);
		tmp = ft_strjoin(s[fd], buf);
		free(s[fd]);
		s[fd] = tmp;
		if (strchr(s[fd], '\n'))
			break;
	}
	if (len == -1)
		return (-1);

}