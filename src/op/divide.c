/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   divide.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maobushi <maobushi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 12:20:16 by maobushi          #+#    #+#             */
/*   Updated: 2023/01/23 05:37:30 by maobushi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_three(t_stack **head)
{
	if ((*head)->index < (*head)->next->next->index
		&& (*head)->next->next->index < (*head)->next->index)
	{
		sa(head);
		ra(head);
	}
	else if ((*head)->next->index < (*head)->index
		&& (*head)->index < (*head)->next->next->index)
		sa(head);
	else if ((*head)->next->next->index < (*head)->index
		&& (*head)->index < (*head)->next->index)
		rra(head);
	else if ((*head)->next->index < (*head)->next->next->index
		&& (*head)->next->next->index < (*head)->index)
		ra(head);
	else if ((*head)->next->next->index < (*head)->next->index
		&& (*head)->next->index < (*head)->index)
	{
		sa(head);
		rra(head);
	}
}

void	sort_two(t_stack **head)
{
	if ((*head)->index > (*head)->next->index)
		ra((head));
}

void	sort_six(t_stack **stack_a, t_stack **stack_b)
{
	long	i;

	i = 0;
	while (ft_lstsize(*stack_a) > 3)
	{
		if ((*stack_a)->index == i)
		{
			pb(stack_b, stack_a);
			i = i + 1;
		}
		else
			ra(stack_a);
	}
	sort_three(stack_a);
	while (i > 0)
	{
		pa(stack_a, stack_b);
		i--;
	}
}

long	count_bit(int argc)
{
	long	tmp;
	long	count;

	count = 0;
	tmp = argc;
	while (tmp > 0)
	{
		tmp = tmp / 2;
		count++;
	}
	return (count);
}

void	sort_morethan_six(t_stack **head_a, t_stack **head_b)
{
	long	flags;
	long	i;
	int		stack_a_size;
	long	m;

	flags = 1;
	stack_a_size = ft_lstsize(*head_a);
	m = count_bit(stack_a_size);
	i = 0;
	while (m > 0)
	{
		while (stack_a_size > 0)
		{
			if (((*head_a)->index & (flags << i)) == 0)
				pb(head_b, head_a);
			else
				ra(head_a);
			stack_a_size--;
		}
		while (ft_lstsize(*head_b) > 0)
			pa(head_a, head_b);
		stack_a_size = ft_lstsize(*head_a);
	i++;
	m--;
	}
}
