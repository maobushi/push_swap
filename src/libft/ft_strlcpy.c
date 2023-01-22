/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maobushi <maobushi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 00:16:11 by maobushi          #+#    #+#             */
/*   Updated: 2023/01/23 05:36:58 by maobushi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

size_t	ft_strlcpy(char *dest, char *src, size_t n)
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

size_t	ft_strlen(char*s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

size_t	ft_arraylen(char**input)
{
	size_t	i;

	i = 0;
	while (input[i] != (void *)0)
	{
		i++;
	}
	return (i);
}

size_t	ft_longlen(long *s)
{
	size_t	i;

	i = 0;
	while (i < sizeof(s))
	{
		i++;
	}
	return (i);
}
