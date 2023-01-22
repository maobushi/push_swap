/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_to_long.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maobushi <maobushi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 02:07:16 by maobushi          #+#    #+#             */
/*   Updated: 2023/01/22 12:35:41 by maobushi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "push_swap.h"

long *str_to_long(char** input)
{
    
    int i;
    
    i = 0;
    while(input[i])
        i++;
    long *long_array = malloc((i+1) * sizeof(long));
    i=0;
    while(input[i])
    {
        //printf("str_to_long input[%d]:%s\n",i,input[i]);
        long_array[i] = ft_atol(input[i]);    
        //printf("str_to_long argv[%d]:%ld\n",i,long_array[i]);
        i++;
    }

    return long_array;
}