/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maobushi <maobushi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:25:38 by maobushi          #+#    #+#             */
/*   Updated: 2023/01/18 14:34:05 by maobushi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char ** check_iscorrectf(int argc,char **argv)
{
    char ** tmp;
    if(argc <= 1)
    {
        exit(EXIT_FAILURE);
    }
    else if(argc == 2)
    {
        tmp = (char **)ft_split(argv[1],' ');
        printf("%p\n", tmp);
        printf("%p\n", tmp[0]);
        
    }
    else
    {
    tmp = ++argv;
    }
    return tmp;
}

int check_isnum(int argc,char ** argv)
{
    int i;
    int j;
    i = 0;
    while(i < argc)
    {
        j = 0;  
        if (argv[i][j] == '-' || argv[i][j] == '+')
            j++;
        while(argv[i][j])
        {
            if (argv[i][j] == ' ')
                return 2;
            if(!('0' <= argv[i][j] && argv[i][j] <= '9'))
                return 1;
            j++;
        }
    i++;
    }
    return 0;
}

bool check_int_range(int argc,long * long_argv)
{
    int i;
    i = 0;
    while(i < argc)
    {
        if(!(INT_MIN <= long_argv[i] && long_argv[i] <= INT_MAX))
            return true;
        i++;
    }
    return false;
}


bool check_dup(int argc,long * argv)
{
    int i;
    int j;
    int max;
    max = argc;
    i = 0;
    j = 0;
    
    while(i < max)
    {
        j = i + 1;
        while(j < max)
        {  
            //printf("look_at:%ld,%ld\n",argv[i], argv[j]);
            if(argv[i] == argv[j])
                return true;
            j++;
        }
        i++;
    }    
    return false;
}