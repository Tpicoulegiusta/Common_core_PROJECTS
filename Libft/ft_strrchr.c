/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:39:30 by tpicoule          #+#    #+#             */
/*   Updated: 2022/11/30 11:22:16 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

#include "libft.h"

char	*ft_strrchr(const char *str, int rd)
{
	size_t	i;

	i = ft_strlen(str) + 1;
	while (i-- > 0)
		if (str[i] == (char) rd)
			return (&((char *) str)[i]);
	return (NULL);
}
/*
int main(void)
{
	char joul[] = "tripouille";
	char jul = 'z';

	printf("%s", ft_strrchr(joul, jul));
}*/
