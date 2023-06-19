/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:25:09 by tpicoule          #+#    #+#             */
/*   Updated: 2022/12/01 10:45:59 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *source)
{
	size_t	i;
	char	*str1;

	str1 = malloc(sizeof(char) * ft_strlen(source) + 1);
	if (!str1)
		return (NULL);
	i = 0;
	while (i < ft_strlen(source))
	{
	str1[i] = source[i];
		i++;
	}
	str1[i] = '\0';
	return (str1);
}
// int main()
// {
//     printf("%s\n", ft_strdup("abcdefg"));
// }