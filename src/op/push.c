/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maobushi <maobushi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 01:12:35 by maobushi          #+#    #+#             */
/*   Updated: 2023/01/17 10:05:27 by maobushi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void push(t_stack **receive,t_stack **send)
{
    if(ft_lstsize((*receive)) == 1 ||ft_lstsize((*send)) == 1 )
        return ;
    t_stack* first;
    t_stack* second;
    
    first = (*send);
    second = (*receive);
    first->next->prev = NULL;
    (*send) = first->next;
    first->next = second;
    second -> prev = first;
    (*receive) = first;
}

void pa(t_stack* a_stack,t_stack* b_stack)
{
    push(&a_stack,&b_stack);
    printf("pa\n");
}

void pb(t_stack* b_stack,t_stack* a_stack)
{
    push(&b_stack,&a_stack);
    printf("pb\n");
}
