#include "../push_swap.h"

static void	reverse_rotate(t_stack **lst)
{
printf("---%d---\n", __LINE__);fflush(stdout);

	t_stack	*tmp;

	if (!lst || !*lst || !((*lst)->next))
		return ;
printf("---%d---\n", __LINE__);fflush(stdout);
	tmp = ft_lstlast(*lst);
	tmp->next = *lst;
	(*lst)->prev = tmp;
	*lst = tmp;
	tmp = tmp->prev;
	tmp->next = NULL;
	(*lst)->prev = NULL;
printf("---%d---\n", __LINE__);fflush(stdout);
}

void	rra(t_stack **input)
{
	reverse_rotate(input);
	printf("rra\n");
}

void	rrb(t_stack **input)
{
	reverse_rotate(input);
	printf("rrb\n");
}

void	rrr(t_stack **input_a, t_stack **input_b)
{
	reverse_rotate(input_a);
	reverse_rotate(input_b);
	printf("rrr\n");
}
