/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:42:46 by tpicoule          #+#    #+#             */
/*   Updated: 2022/12/01 12:37:21 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t size)
{
	unsigned char	*dest;
	unsigned char	*src;
	size_t			i;

	dest = (unsigned char *) destination;
	src = (unsigned char *) source;
	i = 0;
	if (!dest && !src)
		return (0);
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
/*
int main(void)
{
ft_memcpy(NULL, NULL, 12);
}*/
