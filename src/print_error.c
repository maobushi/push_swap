/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maobushi <maobushi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 19:49:22 by maobushi          #+#    #+#             */
/*   Updated: 2023/01/16 21:17:31 by maobushi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../push_swap.h"

void print_error(int input, char **argv_0, long *argv_1)
{
    if(input == 1)
    {
        printf("error!_1\n");
        free(argv_0);//A-1(1/2)
        exit(EXIT_FAILURE);
    }
    else if (input == 2)
    {
        printf("error!_2\n");
        exit(EXIT_FAILURE);
    }
    else if (input == 3)
   {
        printf("error!_3\n");
        //free(argv_0);//freeA
        free(argv_1);//freeB
        exit(EXIT_FAILURE);
    }
}