/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maobushi <maobushi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:39:41 by maobushi          #+#    #+#             */
/*   Updated: 2023/01/17 10:06:49 by maobushi         ###   ########.fr       */
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
}t_stack;




/* void swap(t_stack **input);
void sa(t_stack **input);
void sb(t_stack **input);
void ss(t_stack **input_a,t_stack **input_b);

void rotate(t_stack **input);
void ra(t_stack **input);
void rb(t_stack **input);
void rr(t_stack **input_a,t_stack **input_b);


void reverse_rotate(t_stack **input);
void rra(t_stack **input);
void rrb(t_stack **input);
void rrr(t_stack **input_a,t_stack **input_b);


void push(t_stack **receive,t_stack **send);
void pa(t_stack* a_stack,t_stack* b_stack);
void pb(t_stack* b_stack,t_stack* a_stack);

static char	**ft_free(size_t count, char **output);
static int	ft_count_index(char const *s, char c);
static char	**ft_store_len(const char *s, char **copy, char c, size_t str_len);
 */

char	**ft_split(char const *s, char c);

char ** check_iscorrectf(int argc,char **argv);
int check_isnum(int argc,char ** argv);
bool check_int_range(int argc,long * argv);
bool check_dup(int argc,long * argv);
size_t	ft_strlcpy(char *dest, const char *src, size_t n);

long ft_atol(char* str);
long * to_larray(int argc, char **argv);
long * bubble_sort(int argc,long*input);

void print_error(int input, char **argv_0, long *argv_1);

#endif
