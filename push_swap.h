/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maobushi <maobushi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:39:41 by maobushi          #+#    #+#             */
/*   Updated: 2023/01/16 20:00:07 by maobushi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <limits.h>
typedef struct s_stack
{
    struct s_stack * prev;
    long index;
    struct s_stack * next;
}t_struct;

char	**ft_split(char const *s, char c);
char ** check_iscorrectf(int argc,char **argv);
int check_isnum(int argc,char ** argv);
bool check_int_range(int argc,long * argv);
bool check_dup(int argc,long * argv);
size_t	ft_strlcpy(char *dest, const char *src, size_t n);

long ft_atol(char* str);
long * to_larray(int argc, char **argv);
void print_error(int input, char **argv_0, long *argv_1);
#endif
