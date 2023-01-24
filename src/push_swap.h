/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maobushi <maobushi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 00:04:17 by maobushi          #+#    #+#             */
/*   Updated: 2023/01/24 14:54:02 by maobushi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdbool.h>

typedef struct s_stack
{
	int				data;
	long			index;
	struct s_stack	*prev;
	struct s_stack	*next;
}t_stack;
t_stack	*ft_lstnew(long input);
t_stack	*ft_lstlast(t_stack *lst);
int		ft_lstsize(t_stack *lst);
char	**ft_split(char *src, char c);
char	**check_input_format(int argc, char**argv);
void	ft_lstclear(t_stack **lst);
void	free_darray(size_t count, size_t argv_index, void **output);
void	sort_list(int argc, t_stack **head_a, t_stack **head_b);
void	input_list(size_t argc, t_stack **lst, long *after_sort);
void	sort_two(t_stack **head);
void	divide_sort(t_stack **head_a, t_stack **head_b);
void	ft_lstclear(t_stack **lst);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
void	sort_morethan_six(t_stack **head_a, t_stack **head_b);
void	rotate(t_stack **input);
void	ra(t_stack **lst);
void	rb(t_stack **lst);
void	rr(t_stack **stack_a, t_stack **stack_b);
void	swap(t_stack **input);
void	sa(t_stack **input);
void	sb(t_stack **input);
void	ss(t_stack **input_a, t_stack **input_b);
void	rra(t_stack **input);
void	rrb(t_stack **input);
void	rrr(t_stack **input_a, t_stack **input_b);
//void	push(t_stack **receive, t_stack **send);
void	pa(t_stack **receive, t_stack **send);
void	pb(t_stack **receive, t_stack **send);
void	sort_three(t_stack **head);
void	sort_six(t_stack **stack_a, t_stack **stack_b);
void	print_error(long *long_argv);
void	detect_op(t_stack **stack_a, t_stack **stack_b);
long	*str_to_long(char **input);
long	ft_atol(char *str);
long	*dimensional_comp(int argc, long*input);
long	count_bit(int argc);
bool	check_is_num(int argc, size_t argv_index, char**input);
bool	check_is_int(long *long_argv);
bool	check_is_dup(int input, long *argv);
size_t	ft_arraylen(char **input);
size_t	ft_strlen(char *s);
size_t	ft_strlcpy(char *dest, char *src, size_t n);
size_t	ft_longlen(long *s);
#endif