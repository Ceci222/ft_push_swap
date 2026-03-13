#include "push_swap.h"

int	find_min_num(t_stack *stack_a)
{
	int		min;
	t_node	*current;

	if (!stack_a || !stack_a->top)
		return (-1);

	current = stack_a->top;
	min = stack_a->top->content;

	while (current != NULL)
	{
		if (current->content < min)
			min = current->content;
		current= current->next;
	}
	return (min);
}
