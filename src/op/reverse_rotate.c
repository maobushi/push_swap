/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maobushi <maobushi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 09:55:37 by maobushi          #+#    #+#             */
/*   Updated: 2023/01/24 10:05:04 by maobushi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	reverse_rotate(t_stack **lst)
{
	t_stack	*tmp;

	if (!lst || !*lst || !((*lst)->next))
		return ;
	tmp = ft_lstlast(*lst);
	tmp->next = *lst;
	(*lst)->prev = tmp;
	*lst = tmp;
	tmp = tmp->prev;
	tmp->next = NULL;
	(*lst)->prev = NULL;
}

void	rra(t_stack **input)
{
	reverse_rotate(input);
	write(STDOUT_FILENO, "rra\n", 4);
}

void	rrb(t_stack **input)
{
	reverse_rotate(input);
	write(STDOUT_FILENO, "rrb\n", 4);
}

void	rrr(t_stack **input_a, t_stack **input_b)
{
	reverse_rotate(input_a);
	reverse_rotate(input_b);
	write(STDOUT_FILENO, "rrr\n", 4);
}
