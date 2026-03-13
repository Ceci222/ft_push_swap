#include "push_swap.h"

int	find_min_pos(t_stack *stack_a)
{
	int		index;
	int		current_min_num_position;
	t_node	*current;
	int		node_content;

	if (!stack_a || !stack_a->top)
		return (-1);

	index = 0;
	current_min_num_position = 0;
	current = stack_a->top;
	node_content = stack_a->top->content;

	while (current != NULL)
	{
		if (current->content < node_content)
		{
			node_content = current->content;
			current_min_num_position = index;
		}
		index++;

		current= current->next;
	}
	return (current_min_num_position);
}