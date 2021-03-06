/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/05 08:07:31 by bdekonin       #+#    #+#                */
/*   Updated: 2020/01/24 16:53:59 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 128
# endif

# include <unistd.h>
# include <limits.h>
# include <stdlib.h>

char	*ft_strjoin_endline(char *s1, char *s2, int i, int j);
int		get_next_line(int fd, char **line);
void	*buf_move(char *src);
int		find_endnull(const char *s);

#endif
