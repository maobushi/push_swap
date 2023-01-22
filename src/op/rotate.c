/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maobushi <maobushi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 01:14:48 by maobushi          #+#    #+#             */
/*   Updated: 2023/01/22 14:43:36 by maobushi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void rotate(t_stack **input)
{
    if(ft_lstsize((*input)) == 1)
        return ;
    t_stack* first;
    t_stack* last;
    
    first = (*input);
    last = ft_lstlast((*input));
    
    (*input) = first->next;
    (*input)->prev = NULL;
    first->prev = last;
    first->next = NULL;
    last->next = first;          
}

void ra(t_stack **input)
{
    rotate(input);
    printf("ra\n");
}

void rb(t_stack **input)
{
    rotate(input);
    printf("rb\n");
}

void rr(t_stack **input_a,t_stack **input_b)
{
    rotate(input_a);
    rotate(input_b);
    printf("rr\n");
}


