/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 16:24:22 by tpicoule          #+#    #+#             */
/*   Updated: 2022/12/01 10:46:14 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		i;
	int		n;

	if (!s1 || !s2)
		return (NULL);
	result = malloc((sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!result)
		return (NULL);
	i = 0;
	n = 0;
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	while (s1[i])
	{
		result[n++] = s1[i++];
	}
	i = 0;
	while (s2[i])
		result[n++] = s2[i++];
	result[n] = '\0';
	return (result);
}
/*
int main()
{
    printf("%s\n", ft_strjoin(NULL, "efg"));
}
*/