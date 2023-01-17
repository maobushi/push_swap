/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maobushi <maobushi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 01:14:44 by maobushi          #+#    #+#             */
/*   Updated: 2023/01/17 10:05:23 by maobushi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void reverse_rotate(t_stack **input)
{
    if(ft_lstsize((*input)) == 1)
        return ;
    t_stack* first;
    t_stack* second;

    first = ft_lstlast((*input));
    second = (*input);
    (first->prev)->next = NULL;
    first->next = second;
    first->prev = NULL;
    second->prev = first;
    (*input) = first;
}

void rra(t_stack **input)
{
    reverse_rotate(input);
    printf("rra\n");
}

void rrb(t_stack **input)
{
    reverse_rotate(input);
    printf("rrb\n");
}

void rrr(t_stack **input_a,t_stack **input_b)
{
    reverse_rotate(input_a);
    reverse_rotate(input_b);
    printf("rrr\n");
}