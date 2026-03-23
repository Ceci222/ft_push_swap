#include "push_swap.h"

static int	find_pos(t_stack *stack_a, t_node *node)
{
	int		position;
	t_node	*current;

	if (!stack_a || !stack_a->top)
		return (-1);
	position = 0;
	current = stack_a->top;
	while (current != NULL)
	{
		if (current == node)
			return (position);
		position++;
		current = current->next;
	}
	return (-1);
}

static	int	calculate_cost(t_stack *stack, t_node *node)
{
	int	pos;
	int	size;
	int	cost;

	pos = find_pos(stack, node);
	size = stack->size;
	if (pos <= size / 2)
		cost = pos;
	else
		cost = size - pos;
	return (cost);
}

static	int	total_cost(t_stack *a, t_stack *b, t_node *node, t_node *target_b)
{
	int	cost_a;
	int	cost_b;
	int	position_a;
	int	position_b;

	position_a = find_pos(a, node);
	position_b = find_pos(b, target_b);
	cost_a = calculate_cost(a, node);
	cost_b = calculate_cost(b, target_b);
	if ((position_a <= a->size / 2 && position_b <= b->size / 2)
		|| (position_a > a->size / 2 && position_b > b->size / 2))
	{
		if (cost_a > cost_b)
			return (cost_a);
		else
			return (cost_b);
	}
	else
		return (cost_a + cost_b);
}

t_node	*find_cheapest(t_stack *stack_a, t_stack *stack_b)
{
	int		min_cost;
	int		total;
	t_node	*cheapest;
	t_node	*current;
	t_node	*target;

	min_cost = 2147483647;
	cheapest = NULL;
	current = stack_a->top;
	while (current)
	{
		target = find_target_in_b(stack_b, current->content);
		total = total_cost(stack_a, stack_b, current, target);
		if (total < min_cost)
		{
			min_cost = total;
			cheapest = current;
		}
		current = current->next;
	}
	return (cheapest);
}
