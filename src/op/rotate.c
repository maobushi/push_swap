/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maobushi <maobushi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 01:14:48 by maobushi          #+#    #+#             */
/*   Updated: 2023/01/24 12:01:44 by maobushi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate(t_stack **input)
{
	t_stack	*first;
	t_stack	*last;

	if (ft_lstsize((*input)) == 1)
		return ;
	first = (*input);
	last = ft_lstlast((*input));
	(*input) = first->next;
	(*input)->prev = NULL;
	first->prev = last;
	first->next = NULL;
	last->next = first;
}

void	ra(t_stack **input)
{
	rotate(input);
	write(STDOUT_FILENO, "ra\n", 3);
}

void	rb(t_stack **input)
{
	rotate(input);
	write(STDOUT_FILENO, "rb\n", 3);
}

void	rr(t_stack **input_a, t_stack **input_b)
{
	rotate(input_a);
	rotate(input_b);
	write(STDOUT_FILENO, "rr\n", 3);
}
