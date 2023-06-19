/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:42:31 by tpicoule          #+#    #+#             */
/*   Updated: 2022/12/01 12:33:49 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*s2;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = ft_strlen(s1);
	while (s1[i] && check(s1[i], set))
		i++;
	while (j > i && check(s1[j - 1], set))
		j--;
	s2 = ft_substr(&s1[i], 0, j - i);
	return (s2);
}
/*
int main(void)
{

	printf("%s", ft_strtrim("lorem \n ipsum \t dolor \n sit \t amet", " "));
}*/
