/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 12:14:50 by tpicoule          #+#    #+#             */
/*   Updated: 2023/01/03 12:04:20 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

static char	*ft_strjoinfree(char *stock, char *tmp)
{
	char	*str;

	if (!stock)
	{
		stock = malloc(sizeof(char) * 1);
		stock[0] = '\0';
	}
	str = ft_strjoin(stock, tmp);
	if (stock)
		free(stock);
	return (str);
}

static char	*ft_get_stocked(int fd, char *stock)
{
	char			*buf;
	int				ret_read;

	buf = ft_calloc(BUFFER_SIZE, ret_read = 1);
	if (buf == NULL)
		return (NULL);
	while (ret_read != 0 && !ft_strchr(stock, '\n'))
	{
		ret_read = read(fd, buf, BUFFER_SIZE);
		if (ret_read < 0)
			return (NULL);
		buf[ret_read] = '\0';
		stock = ft_strjoinfree(stock, buf);
	}
	return (free(buf), stock);
}

char	*get_next_line(int fd)
{
	char			*line;
	static char		*stock[1024];
	int				i;

	i = 0;
	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
	{
		if (stock[fd])
			return (free(stock[fd]), stock[fd] = NULL, NULL);
		return (NULL);
	}
	stock[fd] = ft_get_stocked(fd, stock[fd]);
	while (stock[fd][i] && stock[fd][i] != '\n')
		i++;
	if (stock[fd][i] == '\n')
		i++;
	line = ft_substr2(stock[fd], 0, i);
	if (ft_strlen(line) == 0)
		return (free(stock[fd]), stock[fd] = NULL, free(line), NULL);
	stock[fd] = ft_substr2(stock[fd], i, ft_strlen(stock[fd]));
	return (line);
}
