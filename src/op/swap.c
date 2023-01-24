/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maobushi <maobushi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 01:14:04 by maobushi          #+#    #+#             */
/*   Updated: 2023/01/24 12:01:34 by maobushi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_stack **input)
{
	t_stack	*first;
	t_stack	*second;
	int		size;

	first = (*input);
	second = (*input)->next;
	size = ft_lstsize((*input));
	if (size == 1)
		return ;
	else if (size != 2)
		second->next->prev = first;
	first->prev = second;
	first->next = second->next;
	second->prev = NULL;
	second->next = first;
	(*input) = second;
}

void	sa(t_stack **input)
{
	swap(input);
	write(STDOUT_FILENO, "sa\n", 3);
}

void	sb(t_stack **input)
{
	swap(input);
	write(STDOUT_FILENO, "sb\n", 3);
}

void	ss(t_stack **input_a, t_stack **input_b)
{
	swap(input_a);
	swap(input_b);
	write(STDOUT_FILENO, "ss\n", 3);
}
