/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maobushi <maobushi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 01:16:18 by maobushi          #+#    #+#             */
/*   Updated: 2023/01/18 11:50:10 by maobushi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_lstclear(t_stack **lst)
{
    t_stack * tmp;
    
    if (!lst || !*lst)
        return ;
    while((*lst) != NULL)
    {
        tmp = (*lst)->next;
        free(*lst);        
        (*lst) = tmp;
    }
    (*lst) = NULL;
}


/* void free_list(t_stack **head)
{
    int j;
    

    j = ft_lstsize(*head);
    while(j > 0)
    {       
        while((*head)->next != NULL)
            (*head) = (*head)->next;
        while((*head)->prev != NULL)
        {
            (*head) = (*head)->prev;
            free((*head)->next);
        }
        j--;
    }
} */

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


t_stack *ft_lstnew(long input)
{
    t_stack * new_node;

    new_node = malloc(sizeof(t_stack));
    if (new_node == NULL)
        return NULL;
    new_node->prev = NULL;
    new_node->index = input;
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
