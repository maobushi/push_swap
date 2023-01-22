/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maobushi <maobushi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 11:48:03 by maobushi          #+#    #+#             */
/*   Updated: 2023/01/22 19:09:46 by maobushi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int  long_array_search (size_t   argc, long *haystack, long needle)
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

long *bubble_sort(int argc,long*input)
{
	long	tmp;
	int		i;
	int		j;

	long	*tmp_array = malloc(argc*sizeof(long));
	long	*output_array = malloc(argc*sizeof(long));
	i = 0;
	j = 0;
	while (i < argc)
	{
		tmp_array[i] = input[i];
		i++;
	}
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
	i = 0;
	while (i < argc)
	{
		output_array[i] = long_array_search(argc, tmp_array, input[i]);
		i++;
	}
	free(tmp_array);
	return (output_array);
}