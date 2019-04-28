/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshara <bshara@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/28 12:08:48 by chubaka358        #+#    #+#             */
/*   Updated: 2019/04/28 18:52:50 by bshara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

#include "./libft/libft.h"
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

# define GET_NEXT_LINE_H
# define BUFF_SIZE 32
# define EOF '\n'

int		get_next_line(const int fd, char **line);

#endif