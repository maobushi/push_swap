/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   divide.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maobushi <maobushi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 12:20:16 by maobushi          #+#    #+#             */
/*   Updated: 2023/01/23 02:57:28 by maobushi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"



void sort_three(t_stack **head)
{
	//printf("head->index:%ld, (*head)->next->index:%ld\n",(*head)->index,(*head)->next->index);
	if((*head)->index < (*head)->next->next->index && (*head)->next->next->index < (*head)->next->index )
	{
		sa(head);
		ra(head);
	}
	else if ((*head)->next->index < (*head)->index && (*head)->index < (*head)->next->next->index)
		sa(head);
	else if((*head)->next->next->index < (*head)->index && (*head)->index < (*head)->next->index)
		rra(head);
	else if((*head)->next->index < (*head)->next->next->index && (*head)->next->next->index <(*head)->index)
		ra(head);
	else if((*head)->next->next->index < (*head)->next->index && (*head)->next->index < (*head)->index)
		{
			sa(head);
			rra(head);
		}
}

void sort_two(t_stack **head)
{
	if((*head)->index > (*head)->next->index)
		ra((head));
}

static void	sort_six(t_stack **stack_a, t_stack **stack_b)
{

	long i;

	i = 0;
	while(ft_lstsize(*stack_a) > 3)
	{
		//printf("lstsiz:%d\n",ft_lstsize(*stack_a));
		//printf("input:%ld ,i:%ld\n",(*stack_a)->index,i);
		if((*stack_a)->index == i)
		{
			pb(stack_b,stack_a);
			i = i + 1;
		}
	else
		ra(stack_a);
	}
	//printf("three sort いきまーす\n");
	sort_three(stack_a);
	while(i > 0)
	{
		pa(stack_a,stack_b);
		i--;
	}
}

/*void sort_morethan_six(t_stack **head_a,t_stack **head_b,int lstsize)
{
	printf("now_sort_morethan_six\n");
	int i;
	i = 0;
	while(ft_lstsize(*head_a) > (lstsize / 2) )
	{
		printf("head_a:%ld\n",(*head_a)->index);
		if((*head_a)->index >= (lstsize / 2))
			ra(head_a);  
		else
			pb(head_b,head_a);
		i++;
	}
	while(ft_lstsize(*head_b) > 3)
	{
		pa(head_a,head_b);
		ra(head_a);
	}
	while(ft_lstsize(*head_b) > 0)
	{
		sort_three(head_a);
		pa(head_a,head_b);
	}

	printf("lstsize:%d\n",lstsize);
	printf("(lstsize / 2) - 1 :%d\n",(lstsize / 2) - 1 );
	printf("(lstsize / 2) :%d\n",(lstsize / 2));
	printf("(lstsize / 2) + 1 :%d\n",(lstsize / 2) + 1 );
	printf("(lstsize / 2) + 2 :%d\n",(lstsize / 2));
	printf("====a====\n");
	print_list(*head_a);
	printf("====b====\n");
	print_list(*head_b);
}
*/
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

static void sort_morethan_six(t_stack **head_a,t_stack **head_b)
{
	long flags;
	long i;
	flags = 1;
	int stack_a_size;
	stack_a_size = ft_lstsize(*head_a);
	long m;
	m = count_bit(stack_a_size);
	i = 0;
	while(m > 0)
	{
		while(stack_a_size > 0)
		{
			//printf("m:%ld,(*head_a)->index: %ld & i:%ld\n",m,(*head_a)->index,i);
			if(((*head_a)->index & (flags<<i)) == 0)
				pb(head_b,head_a);
			else
				ra(head_a);
			
			stack_a_size--;
		}
		while(ft_lstsize(*head_b) > 0)
			pa(head_a,head_b);
		stack_a_size = ft_lstsize(*head_a);
/*		printf("====head_a====\n");
		print_list(*head_a);
		printf("==============\n");*/
	i++;
	m--;
	}		

}

















void divide_sort(t_stack **head_a,t_stack **head_b)
{

	int    lstsize =  ft_lstsize(*head_a);
	if(lstsize == 1)
		return;
	else if(lstsize == 2)
		sort_two((head_a));
	else if(lstsize == 3)
	{	
		sort_three(head_a);
	}
	else if(lstsize <= 6)
	{
		//printf("divide_input\n");	
		sort_six(head_a,head_b);
	}
	else if(lstsize >= 7)
		sort_morethan_six(head_a,head_b);
}

