/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshara <bshara@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/28 17:22:57 by bshara            #+#    #+#             */
/*   Updated: 2019/04/28 18:36:12 by bshara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "get_next_line.h"

int		main()
{
	int fd;
	char **s;
	s = malloc(BUFF_SIZE * sizeof(char));
	fd = open("42.txt", O_RDONLY);
	get_next_line(fd, s);
	return (0);
}