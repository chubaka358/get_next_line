/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshara <bshara@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/28 12:08:58 by chubaka358        #+#    #+#             */
/*   Updated: 2019/05/01 16:04:47 by bshara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"



ssize_t		is_eof(char *s)
{
	ssize_t		i;
	i = 0;
	while (i < BUFF_SIZE)
	{
		if (s[i] == EOF)
			return (i);
	}
	return (-1);
}

int			get_next_line(const int fd, char **line)
{
    char	s[BUFF_SIZE];
	int		len;

	if (fd < 0 || !line || read(fd, s, 0) < 0)
		return (-1);
	while ((len = read(fd, s, BUFF_SIZE)))
	{
		if (is_eof(s) != -1)
			break ;
		*line = ft_strjoin(*line, ft_cpyuntil(s, EOF));
		return (1);
	}
	return (0);
}