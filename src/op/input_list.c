/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maobushi <maobushi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 21:06:43 by maobushi          #+#    #+#             */
/*   Updated: 2023/01/18 10:22:47 by maobushi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

long count_bit(int argc)
{
    long tmp;
    long count;
    count = 0;
    tmp =argc;
    while(tmp > 0)
    {

        tmp = tmp/2;
        count++;
    }
    return count;
}

void sort_list(int argc,t_stack **head_a,t_stack **head_b)
{
    int i;


    long l;
    long m;    
    long flags = 1;

    l = 0;
    m =count_bit(argc);
    while(l < m)
    {
        i=0;
        printf("+++++l:%ld++++++\n",l);
        while(i<argc)
        {
        printf("==a==:%d;\n",i);
        print_list(*head_a);
        printf("==b==\n");
        print_list(*head_b);
            if((flags<<l) & (*head_a)->index)
                ra(head_a);
            else
                pb(head_b,head_a);
            i++;

        }
        i = ft_lstsize(*head_b);
        while(i > 0)
        {
            pa(head_a,head_b);
            i--;
        }
        l = l +1;
    }

}

void input_list(int argc,t_stack **lst,long *after_sort)
{
    int i;
    i = 0;
    while(i<argc)
    {
        ft_lstadd_back(lst,ft_lstnew(after_sort[i]));
        i++;
    }
    free(after_sort);
}
