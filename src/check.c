/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maobushi <maobushi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 00:45:11 by maobushi          #+#    #+#             */
/*   Updated: 2023/01/22 12:03:37 by maobushi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char **check_input_format(int argc,char**argv)
{
	if(argc <= 1)
		exit(EXIT_FAILURE);
	else if (argc == 2)
	{
		return(ft_split(argv[1],' '));
	}
	else
		return &argv[1];
}

bool	check_is_num(int argc, size_t argv_index, char**input)
{
	int	i;
	int	j;
	i = 0;

	if (*input == NULL)
		return  true;
	while(input[i])
	{	
		j = 0;
		if (input[i][j] == '-' || input[i][j] == '+')
			j++;
		while(input[i][j])
		{
			if(!('0' <= input[i][j] && input[i][j] <= '9'))
			{
				if(argc == 2)
					free_darray(argc,argv_index,(void **)input);
				return true;
			}
			j++;
		}
		i++;
	}
	return false;
}

bool check_is_int(long  *long_argv)
{
	if(!(INT_MIN <= *long_argv && *long_argv <= INT_MAX))
		return true;
	return false;
}




bool check_is_dup(int input,long * argv)
{
	int i;
	int j;
	
	i = 0;
	j = 0;


	while(i < input)
	{
		j = i + 1;
		while(j < input)
		{  
			if(argv[i] == argv[j])
				return true;
			j++;
		}
		i++;
	}    
	return false;
}

