/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 10:16:54 by tpicoule          #+#    #+#             */
/*   Updated: 2022/11/21 16:27:09 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t len)
{
	int	x;

	x = 0;
	if (str1 == str2)
		return (0);
	if ((str1[x] == '0' && str2[x] == '0') || (len == '0'))
		return (0);
	while (((str1[x] || str2[x]) && len))
	{
		if (!str1[x] || !str2[x])
			return (((unsigned char *)str1)[x] - ((unsigned char *)str2)[x]);
		if (str1[x] == str2[x])
		{
			x++;
			len--;
		}
		else
			return (((unsigned char *)str1)[x] - ((unsigned char *)str2)[x]);
	}
	return (0);
}
/*
int main(void)
{
    char str1[] = "";
    char str2[] = "1";
    printf("%d\n", ft_strncmp(str1, str2, 10));
    printf("%d", strncmp(str1, str2, 10));
}
*/
