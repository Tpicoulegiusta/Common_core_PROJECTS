/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 08:50:01 by tpicoule          #+#    #+#             */
/*   Updated: 2022/12/01 10:43:42 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// <stdio.h>
#include"libft.h"

void	*ft_memmove(void *destination, const void *source, size_t size)
{
	size_t			i;

	i = 0;
	if (!((unsigned char *) destination) && !((unsigned char *) source))
		return (0);
	else if (((unsigned char *) destination) < ((unsigned char *) source))
	{
		while (i < size)
		{
			((unsigned char *) destination)[i] = ((unsigned char *) source)[i];
			i++;
		}
	}	
	else
	{
		while (size > 0)
		{
			((unsigned char *) destination)[size - 1]
				= ((unsigned char *) source)[size - 1];
			size--;
		}
	}
	return ((unsigned char *) destination);
}
/*
int main (void)
{
	char src[] = "lorem ipsum dolor sit amet";
	char *dest;
	
	dest = src + 1;
	if (dest != ft_memmove(dest, src, 8))
		printf("grosse erreur\n");
	printf("memmove=%s \tdest=%s", ft_memmove(dest, src, 8), dest);
}*/
