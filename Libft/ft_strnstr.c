/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 18:21:10 by tpicoule          #+#    #+#             */
/*   Updated: 2022/11/30 12:06:35 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (s2[i] == '\0' || (len == 0 && !s1))
		return ((char *) s1);
	while (s1[i] && i < len)
	{
		j = 0;
		while ((s1[i + j] == s2[j]) && ((i + j) < len))
		{
			j++;
			if (s2[j] == '\0')
				return ((char *)&s1[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int main(void)
{
    char i[30] = "aaabcabcd";
    char e[10] = "aabc";
    printf("%s\n", ft_strnstr(i, e, -1));
    printf("%s", strnstr(i, e, -1));
}*/