#include "push_swap.h"

t_node	*find_min_node(t_stack *stack)
{
	int		min;
	t_node	*wanted;
	t_node	*current;

	if (!stack || !stack->top)
		return (NULL);
	wanted = stack->top;
	current = stack->top;
	min = stack->top->content;
	while (current != NULL)
	{
		if (current->content < min)
		{
			min = current->content;
			wanted = current;
		}
		current = current->next;
	}
	return (wanted);
}

t_node	*find_max_node(t_stack *stack_b)
{
	int		max;
	t_node	*wanted;
	t_node	*current;

	if (!stack_b || !stack_b->top)
		return (NULL);
	wanted = stack_b->top;
	current = stack_b->top;
	max = stack_b->top->content;
	while (current != NULL)
	{
		if (current->content > max)
		{
			max = current->content;
			wanted = current;
		}
		current = current->next;
	}
	return (wanted);
}

t_node	*find_target_in_b(t_stack *stack_b, int value)
{
	t_node	*target;
	t_node	*current;

	target = NULL;
	current = stack_b->top;
	while (current)
	{
		if (current->content < value)
		{
			if (target == NULL || current->content > target->content)
				target = current;
		}
		current = current->next;
	}
	if (target == NULL)
		target = find_min_node(stack_b);
	return (target);
}
