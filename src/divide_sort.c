/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   divide_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maobushi <maobushi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:00:06 by maobushi          #+#    #+#             */
/*   Updated: 2023/01/18 14:16:35 by maobushi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_two(t_stack **head)
{
    if((*head)->index > (*head)->next->index)
        ra((head));
}


void divide_sort(int argc,t_stack **head_a,t_stack **head_b)
{
    if(ft_lstsize(*head_a) == 1)
    {
        return;
    }    
    else if(ft_lstsize(*head_a) == 2)
    {
        sort_two((head_a));
    }
    else if(ft_lstsize(*head_a) == 3)
    {
        printf("case3,argc is %d",argc);
    }
    else if(ft_lstsize(*head_a) == 9)
        printf("case4,%ld",(*head_b)->index);
}