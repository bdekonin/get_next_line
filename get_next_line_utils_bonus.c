/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line_utils_bonus.c                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/21 15:14:28 by bdekonin       #+#    #+#                */
/*   Updated: 2020/01/25 15:38:06 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strjoin_endline(char *s1, char *s2, int i, int j)
{
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	str = malloc(sizeof(char) * (find_endnull(s1) + find_endnull(s2) + 1));
	if (!str)
	{
		free(s1);
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0' && s2[j] != '\n')
	{
		str[i + j] = s2[j];
		j++;
	}
	free(s1);
	str[i + j] = '\0';
	return (str);
}

int		find_endnull(const char *s)
{
	size_t i;

	i = 0;
	while (s[i] != '\n' && s[i] != '\0')
		i++;
	return (i);
}

void	*buf_move(char *src)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (src[j] != '\n')
		j++;
	j++;
	while (src[j - 1] != '\0')
	{
		src[i] = src[j];
		i++;
		j++;
	}
	return (src);
}
