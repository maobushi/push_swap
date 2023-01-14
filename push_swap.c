/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maobushi <maobushi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 11:02:39 by maobushi          #+#    #+#             */
/*   Updated: 2023/01/14 02:21:43 by maobushi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

node * init_node(int input)
{
    node *init = malloc(sizeof(node));
    init->data = input;
    init->next = NULL;
    return init;
}
void *append_node(node *input_node,int input_data)
{
    node *new_node = malloc(sizeof(node));
    
    new_node->data = input_data;
    new_node->next = NULL;
    while(input_node->next != NULL)
        input_node = input_node->next;
    input_node->next = new_node;
    return new_node;
}


void print_list(node *input)
{
    while (input != NULL)
    {
        printf("%d ",input->data);
        input = input->next;
    
    }
    printf("\n");

}

//---Algorythm
void sa(node *head_a)
{
    int tmp;
    tmp = head_a->next->data;
    head_a->next->data = head_a->data;
    head_a->data = tmp;
    //printf("sa");
}

void sb(node *head_b)
{
    int tmp;
    tmp = head_b->next->data;
    head_b->next->data = head_b->data;
    head_b->data = tmp;
    //printf("sb");
}
void ss(node*head_a,node*head_b)
{
    sa(head_a);
    sb(head_b);
}


void ra(node **head_a)
{
    node* last = (*head_a);
    node* first = (*head_a)->next;
    while((*head_a)->next != NULL)
        (*head_a) = (*head_a)->next;
    (*head_a)->next = last;
    last->next = NULL;
    (*head_a) = first;
}

void rb(node **head_b)
{
    node* last = (*head_b);
    node* first = (*head_b)->next;
    while((*head_b)->next != NULL)
        (*head_b) = (*head_b)->next;
    (*head_b)->next = last;
    last->next = NULL;
    (*head_b) = first;
}

void rr(node **head_a,node **head_b)
{
    ra(head_a);
    rb(head_b);
}

void rra(node **head_a)
{
    node* first;
    first->next = *head_a;
    
    
}



int main(int argc,char *argv[])
{
/*     //supose that argv is correctly number and arrocated
    size_t num;
    num = 1;
    node *head_a;
    head_a = init_node(atoi(argv[num++]));

    while(num < argc)
    {
        append_node(head_a,atoi(argv[num]));//supose that not only argv[0]
        num++;
    }
    ra(&head_a);
    print_list(head_a);
} */

    printf("%s",argv[0]);
}