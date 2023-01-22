/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maobushi <maobushi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 23:50:34 by maobushi          #+#    #+#             */
/*   Updated: 2023/01/23 03:36:07 by maobushi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*void print_list(t_stack *input)
{
    while (input != NULL)
    {
        printf("now data\t%ld \n",input->index);
        printf("prev\t%p \n",input->prev);
        printf("now\t%p \n",input);
        printf("next\t%p \n",input->next);
        //printf("%ld \n",input->index);
        //printf("%p \n",&(input->index));
        
        input = input->next;
    }
    printf("\n");
}
*/

int main(int argc,char**argv)
{

	t_stack * head_a;
	t_stack * head_b;
	head_a = NULL;
	head_b = NULL;

	char **input;
	long *long_argv;
	size_t argv_index;

	input = check_input_format(argc,argv);
	argv_index = ft_arraylen(input);
	if(check_is_num(argc,argv_index,input))
	{
		write(STDOUT_FILENO,"Error\n", 6);
		exit(EXIT_FAILURE);
	}
	long_argv = str_to_long(input);
	int i;
	i = 0;
	while(input[i])
	{
		if(check_is_int(&long_argv[i]))
		{
			write(STDOUT_FILENO,"Error\n", 6);
			free(long_argv);
			exit(EXIT_FAILURE);
		}
		i++;
	}
	if(check_is_dup(i,long_argv))
	{
		write(STDOUT_FILENO,"Error\n", 6);
		free(long_argv);
		exit(EXIT_FAILURE);
	}
	free_darray((size_t)argc,argv_index,(void **)input);
	input_list(argv_index,&head_a,bubble_sort(argv_index,long_argv));
	divide_sort(&head_a,&head_b);
	ft_lstclear(&head_a);
    ft_lstclear(&head_b);
    free(long_argv);
	}
