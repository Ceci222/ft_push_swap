#include "push_swap.h"

int	find_max_num(t_stack *stack_a)
{
	int		max;
	t_node	*current;

	if (!stack_a || !stack_a->top)
		return (-1);

	current = stack_a->top;
	max = stack_a->top->content;

	while (current != NULL)
	{
		if (current->content > max)
			max = current->content;
		current= current->next;
	}
	return (max);
}