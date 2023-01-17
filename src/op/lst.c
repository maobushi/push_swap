/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maobushi <maobushi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 01:16:18 by maobushi          #+#    #+#             */
/*   Updated: 2023/01/17 10:05:15 by maobushi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
int ft_lstsize(t_stack *lst)
{
    int count;
    count = 0;
    if (!lst)
        return (0);
    while(lst != NULL)
    {
        lst = lst->next;
        count ++ ;
    }
    return count;
}


t_stack *ft_lstnew(int input)
{
    t_stack * new_node;

    new_node = malloc(sizeof(t_stack));
    if (new_node == NULL)
        return NULL;
    new_node->data = input;
    new_node->index = 0;
    new_node->next = NULL;
    return new_node;
}

t_stack *ft_lstlast(t_stack *lst)
{
    if (!lst)
        return (NULL);
    while(lst->next != NULL)
        lst = lst->next;
    return lst;
}

void ft_lstadd_back(t_stack **lst, t_stack *new)
{
    t_stack  *tmp;

    if (!lst || !new)
        return ;
    if (!*lst)
    {
        *lst = new;
        return ;
    }
    tmp = ft_lstlast(*lst);

    
    tmp->next = new;
    new->prev = (tmp);
}
