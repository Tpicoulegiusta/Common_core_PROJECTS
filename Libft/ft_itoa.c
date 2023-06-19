/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 12:46:26 by tpicoule          #+#    #+#             */
/*   Updated: 2022/12/01 15:18:58 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int n)
{
	int	k;

	k = 0;
	if (n <= 0)
	{
		n = n * -1;
		k++;
	}
	while (n != 0)
	{
		n = n / 10;
		k++;
	}
	return (k);
}

char	*ft_itoa(int n)
{
	char	*size;
	int		i;

	i = ft_count(n);
	size = malloc(sizeof(char) * ft_count(n) + 1);
	if (!size)
		return (NULL);
	size[i] = '\0';
	if (n == 0)
		size[0] = '0';
	if (n < 0)
	{
		n = n * -1;
		size[0] = '-';
	}
	while (n != 0)
	{
		if ((n % 10) < 0)
			size[--i] = ((n % 10) * -1) + '0';
		else
			size[--i] = (n % 10) + '0';
		n = n / 10;
	}
	return (size);
}
/*
int	main(void)
{
	printf("%s\n", ft_itoa(-2147483648));
}*/
