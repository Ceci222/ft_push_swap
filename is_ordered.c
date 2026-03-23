#include "push_swap.h"

int	is_ordered(t_stack *stack_a)
{
	t_node	*current;

	if (!stack_a->top)
		return (0);
	current = stack_a->top;
	while (current->next != NULL)
	{
		if (current->content < current->next->content)
			current = current->next;
		else
			return (0);
	}
	return (1);
}
