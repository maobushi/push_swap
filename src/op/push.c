/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maobushi <maobushi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 01:12:35 by maobushi          #+#    #+#             */
/*   Updated: 2023/01/18 10:34:43 by maobushi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
void push(t_stack **receive,t_stack **send)
{
    if(*send == NULL )//|| (*send)->next == NULL)
        return ;
    t_stack* first;
    t_stack* second;
    
    first = (*send);
    second = (*receive);
    if((*send)->next !=NULL)
    {
        (*send)->next->prev = NULL;
        (*send) = (*send)->next;
    }
    else
        (*send) = NULL;
        
    first->next = second;
    if((*receive) != NULL)
        second->prev = first;

        
    (*receive) = first;
}

void pa(t_stack** receive,t_stack** send)
{
    push(receive,send);
    printf("pa\n");
}

void pb(t_stack** receive,t_stack** send)
{
    push(receive,send);
    printf("pb\n");

}

