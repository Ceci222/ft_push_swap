#include "push_swap.h"

int	find_max_pos(t_stack *stack_a)
{
	int		index;
	int		current_max_num_position;
	int		node_content;
	t_node	*current;

	if (!stack_a || !stack_a->top)
		return (-1);
	index = 0;
	current_max_num_position = 0;
	current = stack_a->top;
	node_content = stack_a->top->content;
	while (current != NULL)
	{
		if (current->content > node_content)
		{
			node_content = current->content;
			current_max_num_position = index;
		}
		index++;
		current = current->next;
	}
	return (current_max_num_position);
}
