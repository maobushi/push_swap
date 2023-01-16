/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maobushi <maobushi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:39:07 by maobushi          #+#    #+#             */
/*   Updated: 2023/01/17 08:21:24 by maobushi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int count_elements(char **input)
{
    int index;
    index = 0;
    while(input[index])
        index++;
    return index;
}
int main(int argc,char **argv)
{
    //t_struct *head_a;
    //t_struct *head_b;
    //head_a = NULL;
    //head_b = NULL;
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
    
    
    int i = 0;
    while(i < argc)
        printf("%ld\n",long_argv[i++]);

    
    //make_list(bubble_sort(convert_iarray(argc,argv)));
    //以下、5個以下の対応を考える
    
    return 0;
}