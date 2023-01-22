/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_to_long.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maobushi <maobushi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 02:07:16 by maobushi          #+#    #+#             */
/*   Updated: 2023/01/23 05:38:44 by maobushi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "push_swap.h"

long	*str_to_long(char**input)
{
	int		i;
	long	*long_array;

	i = 0;
	while (input[i])
		i++;
	long_array = malloc((i + 1) * sizeof(long));
	i = 0;
	while (input[i])
	{
		long_array[i] = ft_atol(input[i]);
		i++;
	}
	return (long_array);
}
