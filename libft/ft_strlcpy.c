/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maobushi <maobushi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:06:25 by maobushi          #+#    #+#             */
/*   Updated: 2023/01/17 10:06:11 by maobushi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../src/push_swap.h"

static size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (n > 0)
	{
		while (n - 1 > 0 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
			n--;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}

