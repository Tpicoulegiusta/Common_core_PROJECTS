/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:24:03 by tpicoule          #+#    #+#             */
/*   Updated: 2022/11/18 11:58:17 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	x;
	size_t	y;

	x = 0;
	y = 0;
	if (size == 0)
		return ((size_t) ft_strlen((char *) src));
	if (size <= (size_t) ft_strlen(dest))
		return ((size_t) ft_strlen((char *) src) + size);
	while (dest[x])
		x++;
	while (src[y] && (x + y < size - 1))
	{
		dest[x + y] = src[y];
		y++;
	}
	dest[x + y] = '\0';
	return (x + (size_t)ft_strlen((char *) src));
}
/*
int main(void)
{
	char dest[50] = "1234";
	char src[50] = "abcd";
	char gdest[50] = "1234";
	char dsrc[50] = "5214";
	printf("%zu\n", ft_strlcat(dest, src, 4));
	printf("%lu\n", strlcat(gdest, dsrc, 4));
}*/
