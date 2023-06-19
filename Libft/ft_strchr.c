/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:05:28 by tpicoule          #+#    #+#             */
/*   Updated: 2022/11/30 11:10:05 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

#include "libft.h"

char	*ft_strchr(const char *str, int rd)
{
	size_t	i;
	size_t	j;

	j = ft_strlen(str);
	i = 0;
	while (i < j + 1)
	{
		if (str[i] == (char) rd)
			return (&((char *) str)[i]);
		i++;
	}
	return (NULL);
}
/*
int main(void)
{
	char joul[] = "tripouille";
	char jul = 't';

	printf("%s",ft_strchr(joul, jul + 256));
}
*/
