/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maobushi <maobushi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 23:50:34 by maobushi          #+#    #+#             */
/*   Updated: 2023/01/24 14:45:57 by maobushi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	divide_sort(t_stack **head_a, t_stack **head_b)
{
	int	lstsize;

	lstsize = ft_lstsize(*head_a);
	if (lstsize == 1)
		return ;
	else if (lstsize == 2)
		sort_two((head_a));
	else if (lstsize == 3)
	{	
		sort_three(head_a);
	}
	else if (lstsize <= 6)
	{
		sort_six(head_a, head_b);
	}
	else if (lstsize >= 7)
		sort_morethan_six(head_a, head_b);
}

void	print_error(long *long_argv)
{
	write(STDOUT_FILENO, "Error\n", 6);
	free(long_argv);
	exit(EXIT_FAILURE);
}

long	*check_input_allocate(int argc, size_t argv_index, char **input)
{
	int		i;
	long	*long_argv;

	if (check_is_num(argc, argv_index, input))
		print_error(NULL);
	long_argv = str_to_long(input);
	i = 0;
	while (input[i])
	{
		if (check_is_int(&long_argv[i]))
			print_error(long_argv);
	i++;
	}
	if (check_is_dup(i, long_argv))
		print_error(long_argv);
	return (long_argv);
}

int	main(int argc, char**argv)
{
	long	*long_argv;
	t_stack	*head_a;
	t_stack	*head_b;
	char	**input;
	size_t	argv_index;

	head_a = NULL;
	head_b = NULL;
	input = check_input_format(argc, argv);
	argv_index = ft_arraylen(input);
	long_argv = check_input_allocate(argc, argv_index, input);
	free_darray((size_t)argc, argv_index, (void **)input);
	input_list(argv_index, &head_a, dimensional_comp(argv_index, long_argv));
	divide_sort(&head_a, &head_b);
	ft_lstclear(&head_a);
	ft_lstclear(&head_b);
	free(long_argv);
}
