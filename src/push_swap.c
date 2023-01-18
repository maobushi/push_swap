/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maobushi <maobushi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:39:07 by maobushi          #+#    #+#             */
/*   Updated: 2023/01/18 11:19:10 by maobushi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int count_elements(char **input)
{
    int index;
    index = 0;
    while(input[index])
        index++;
    return index;
}

void print_list(t_stack *input)
{   

    while (input != NULL)
    {
        printf("index : %ld \n",input->index);
        printf("prev\t%p \n",input->prev);
        printf("now\t%p \n",input);
        printf("next\t%p \n",input->next);
        //printf("%ld \n",input->index);
        //printf("%p \n",&(input->index));
        
        input = input->next;
    }
    printf("\n");
}
int main(int argc,char **argv)
{
    t_stack *head_a;
    t_stack *head_b;
    head_a = NULL;
    head_b = NULL;
    char **new_argv;
    long *long_argv;
    new_argv = check_iscorrectf(argc,argv);//mallocA
    argc = count_elements(new_argv);    
    if(check_isnum(argc,new_argv) == 1)
        print_error(1,new_argv,NULL);
    else if (check_isnum(argc,new_argv) == 2)
        print_error(2, NULL,NULL);
    long_argv = to_larray(argc,new_argv);//mallocB
    if(check_int_range(argc,long_argv) || check_dup(argc,long_argv))
        print_error(3,NULL,long_argv);
    input_list(argc,&head_a,bubble_sort(argc,long_argv));
    sort_list(argc,&head_a,&head_b);
    print_list(head_a);
    print_list(head_b);
    free_list(&head_a);
    free_list(&head_b);
    free(long_argv);
    return 0;
}

__attribute__((destructor)) static void destructor()
{
	system("leaks -q push_swap");
}