/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 13:47:51 by tpicoule          #+#    #+#             */
/*   Updated: 2022/12/01 12:32:55 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s1;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s + start) > len + 1)
		s1 = malloc(sizeof(char) * len + 1);
	else
		s1 = malloc(sizeof(char) * (ft_strlen(s + start) + 1));
	if (!s1)
		return (NULL);
	i = start;
	j = 0;
	while (j < len && s[start])
	{
		s1[j] = s[start];
		j++;
		start++;
	}
	s1[j] = '\0';
	return (s1);
}
/*
int main()
{
	printf(">>> %s", ft_substr("i just want this part #############", 5, 10));
	return (0);
}
*/
