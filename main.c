/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshara <bshara@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/28 17:22:57 by bshara            #+#    #+#             */
/*   Updated: 2019/05/02 15:34:36 by bshara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

int		main()
{
	int fd;
	char *s;
	
	fd = open("42.txt", O_RDONLY);
	while (get_next_line(fd, &s) > 0)
	{
		printf("%s\n", s);
		free(s);
	}
	return (0);
}