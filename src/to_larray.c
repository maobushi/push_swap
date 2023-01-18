/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_larray.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maobushi <maobushi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:40:19 by maobushi          #+#    #+#             */
/*   Updated: 2023/01/18 15:32:13 by maobushi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long *to_larray(int argc, char **argv, int * flags)
{
    long *larray = malloc(argc * sizeof(long));
    int i;
    printf("%d\n",argc);
    i = 0;
    while(i < argc)
    {
        larray[i] = atol(argv[i]);
        if (*flags == 1)
            free(argv[i]);
            
        
        printf("larray[%d]:%ld\n",i,larray[i]);
    i++;
    }
    
    return larray;
}