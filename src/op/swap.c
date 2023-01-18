/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maobushi <maobushi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 01:14:04 by maobushi          #+#    #+#             */
/*   Updated: 2023/01/17 20:42:16 by maobushi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void swap(t_stack **input)
{
    if(ft_lstsize((*input)) == 1)
        return ;
    t_stack* first = (*input);
    t_stack* second = (*input)->next;
    
    first->prev = second;
    first->next = second->next;
    second->prev = NULL;
    second->next = first;
    
    (*input) = second;
        
}

void sa(t_stack **input)
{
    swap(input);
    printf("sa\n");
}
void sb(t_stack **input)
{
    swap(input);
    printf("sb\n");
}

void ss(t_stack **input_a,t_stack **input_b)
{
    swap(input_a);
    swap(input_b);
    printf("ss\n");
}