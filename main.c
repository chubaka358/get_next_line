/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chubaka358 <chubaka358@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/28 17:22:57 by bshara            #+#    #+#             */
/*   Updated: 2019/05/07 11:59:18 by chubaka358       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

int		main()
{
	int fd1;
	int fd2;
	int ret;
	char **s;
	s = malloc(sizeof(char*) * 1);
	fd1 = open("42.txt", O_RDONLY);
	fd2 = open("13.txt", O_RDONLY);
	//while ((ret = get_next_line(fd, s) > 0))
	//{
	//	printf("%s\n", *s);
	//	printf("%d\n", ret);
	//}
	get_next_line(fd1, s);
	printf("%s\n", *s);
	ft_strdel(s);
	get_next_line(fd2, s);
	printf("%s\n", *s);ft_strdel(s);
	ft_strdel(s);
	get_next_line(fd1, s);
	printf("%s\n", *s);
	return (0);
}