/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maobushi <maobushi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 01:12:35 by maobushi          #+#    #+#             */
/*   Updated: 2023/01/24 14:53:53 by maobushi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	push(t_stack **send, t_stack **receive)
{
	t_stack	*tmp_send;

	if (!send || !receive || !*send)
		return ;
	tmp_send = *send;
	if (!(*send)->next)
		*send = NULL;
	else
	{
		*send = (*send)->next;
		(*send)->prev = NULL;
	}
	if (*receive)
	{
		(*receive)->prev = tmp_send;
		tmp_send->next = *receive;
		*receive = tmp_send;
	}
	else
	{
		*receive = tmp_send;
		(*receive)->next = NULL;
	}
}

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	push(stack_b, stack_a);
	write(1, "pa\n", 3);
}

void	pb(t_stack **stack_a, t_stack **stack_b)
{
	push(stack_a, stack_b);
	write(1, "pb\n", 3);
}
