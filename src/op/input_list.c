/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maobushi <maobushi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 12:17:04 by maobushi          #+#    #+#             */
/*   Updated: 2023/01/23 06:18:04 by maobushi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	input_list(size_t argc, t_stack **lst, long *after_sort)
{
	size_t	i;
	t_stack	*tmp;

	i = 0;
	while (i < argc)
	{
		tmp = ft_lstnew(after_sort[i]);
		if (tmp == NULL)
			exit(EXIT_FAILURE);
		ft_lstadd_back(lst, tmp);
		i++;
	}
	free(after_sort);
}
