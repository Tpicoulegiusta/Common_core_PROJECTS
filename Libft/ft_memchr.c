/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 10:35:36 by tpicoule          #+#    #+#             */
/*   Updated: 2022/11/29 17:40:16 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *) s)[i] == (unsigned char) c)
			return ((unsigned char *)s + i);
		i++;
	}
	return (NULL);
}
/*
int main()
{
    char str[] = "12345FF6789";
    printf("%s\n", memchr(str, '6', 16));
    printf("%s", ft_memchr(str, '6', 16));
}*/
