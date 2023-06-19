/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 10:38:17 by tpicoule          #+#    #+#             */
/*   Updated: 2022/12/01 10:41:39 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_memcmp(const void *p1, const void *p2, size_t size)
{
	size_t				x;
	unsigned char		*pb1;
	unsigned char		*pb2;

	pb1 = (unsigned char *) p1;
	pb2 = (unsigned char *) p2;
	x = 0;
	while (size)
	{
		if (pb1[x] != pb2[x])
			return (pb1[x] - pb2[x]);
		x++;
		size--;
	}
	return (0);
}
