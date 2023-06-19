/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:16:23 by tpicoule          #+#    #+#             */
/*   Updated: 2022/11/17 13:19:07 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include "libft.h"

void	*ft_memset(void *s, int value, size_t count)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *) s;
	i = 0;
	while (i < count)
	{
		str[i] = value;
		i++;
	}
	return (str);
}
/*
int main(void)
{
	char chaine[49] = "jazzinazibaz";
	printf("%s", ft_memset(chaine, 'A', 5));
}*/
