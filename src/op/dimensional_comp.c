/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dimensional_comp.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maobushi <maobushi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 11:48:03 by maobushi          #+#    #+#             */
/*   Updated: 2023/01/23 06:53:29 by maobushi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	long_array_search(size_t argc, long *haystack, long needle)
{
	size_t	i;

	i = 0;
	while (i < argc)
	{
		if (haystack[i] == needle)
			return (i);
		i++;
	}
	return (0);
}

static long	*bubble_sort(int argc, long *tmp_array)
{
	long	tmp;
	int		i;
	int		j;

	i = 0;
	while (i < argc)
	{
		j = 0;
		while (j < argc - i - 1)
		{
			if (tmp_array[j] > tmp_array[j + 1])
			{
				tmp = tmp_array[j];
				tmp_array[j] = tmp_array[j + 1];
				tmp_array[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
	return (tmp_array);
}

long	*dimensional_comp(int argc, long*input)
{
	int		i;
	long	*tmp_array;
	long	*output_array;

	tmp_array = malloc(argc * sizeof(long));
	if (tmp_array == NULL)
		return (NULL);
	output_array = malloc(argc * sizeof(long));
	if (output_array == NULL)
		return (NULL);
	i = 0;
	while (i < argc)
	{
		tmp_array[i] = input[i];
		i++;
	}
	tmp_array = bubble_sort(argc, tmp_array);
	i = 0;
	while (i < argc)
	{
		output_array[i] = long_array_search(argc, tmp_array, input[i]);
		i++;
	}
	free(tmp_array);
	return (output_array);
}
