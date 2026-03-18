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
		current= current->next;
	}
	return (-1);
}
static	t_node	*find_max_node(t_stack *stack_b)
{
	int	max;
	t_node *wanted;
	t_node	*current;

	if (!stack_b || !stack_b->top)
		return (NULL);

	wanted  = stack_b->top;
 	current = stack_b->top;
	max = stack_b->top->content;

	while (current != NULL)
	{
		if (current->content > max)
		{
			max = current->content;
			wanted = current;
		}
		current= current->next;
	}
	return (wanted);
}
static	t_node	*find_min_node(t_stack *stack)
{
	int	min;
	t_node *wanted;
	t_node	*current;

	if (!stack || !stack->top)
		return (NULL);

	wanted  = stack->top;
 	current = stack->top;
	min = stack->top->content;

	while (current != NULL)
	{
		if (current->content < min)
		{
			min = current->content;
			wanted = current;
		}
		current= current->next;
	}
	return (wanted);
}

static t_node *find_target_in_b(t_stack *stack_b, int value) //busca el nodo encima del cual va a depositar el node de a 
{
	t_node *target;
	t_node *current;

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



static	int	calculate_cost(t_stack *stack, t_node *node)
{
	int pos;
	int size;
	int	cost;

	pos = find_pos(stack, node);
	size =  stack->size;

	if (pos <= size/2)
		cost = pos;
	else
		cost = size - pos;
	return (cost);
}

static	int	total_cost(t_stack *stack_a, t_stack *stack_b, t_node *node, t_node *target_b)
{
	int	cost_a;
	int cost_b;
	int position_a;
	int position_b;

	position_a = find_pos(stack_a, node);
	position_b = find_pos(stack_b, target_b);

	cost_a = calculate_cost(stack_a, node);
	cost_b = calculate_cost(stack_b, target_b);
	if ((position_a <= stack_a->size/2 && position_b <= stack_b->size/2) 
	|| (position_a > stack_a->size/2 && position_b > stack_b->size/2))
	{
		if (cost_a > cost_b)
			return (cost_a);
		else
			return (cost_b);
	}
	else
		return (cost_a + cost_b);
}
//recibe el nodo mas barato de mover
static void	execute_move(t_stack *stack_a, t_stack *stack_b, t_node *node, t_node *target,t_counter *counter)
{
	if (!stack_a || !stack_b || !node || !target)
		return ;
	while (stack_a->top != node && stack_b->top != target)
	{
		if(find_pos(stack_a, node) <= stack_a->size / 2 && find_pos(stack_b, target) <= stack_b->size / 2)
			rr(stack_a, stack_b, counter);
		else if (find_pos(stack_a, node) > stack_a->size / 2 && find_pos(stack_b, target) > stack_b->size / 2)
			rrr(stack_a, stack_b, counter);
		else
			break;
	}
	while (stack_a->top != node) 
	{
		if(find_pos(stack_a, node) <= stack_a->size / 2)
			ra(stack_a, counter);
		else
			rra(stack_a, counter);
	}
	while (stack_b->top != target) 
	{
		if(find_pos(stack_b, target) <= stack_b->size / 2)
			rb(stack_b, counter);
		else
			rrb(stack_b, counter);
	}
	pb(stack_a, stack_b, counter);
}

static t_node *find_cheapest(t_stack *stack_a, t_stack *stack_b)
{
	t_node *cheapest;
	t_node *current;
	t_node *target;
	int	min_cost;

	int total;
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
void	sort_turk(t_stack *stack_a, t_stack *stack_b, t_counter *counter)
{
	t_node *cheapest;
	t_node *target;
	pb(stack_a, stack_b, counter);
	pb(stack_a, stack_b, counter);

	if (find_max_node(stack_b) != stack_b->top)
		sb(stack_b, counter);
	while (stack_a->size > 0)
	{
		cheapest = find_cheapest(stack_a, stack_b);
		target = find_target_in_b(stack_b, cheapest->content);
		execute_move(stack_a, stack_b, cheapest, target, counter);
	}
	while (stack_b->size > 0)
	{
		while (stack_b->top != find_max_node(stack_b))
		{
			if (find_pos(stack_b, find_max_node(stack_b)) <= stack_b->size / 2)
				rb(stack_b, counter);
			else
				rrb(stack_b, counter);
		}
		pa(stack_a, stack_b, counter);
	}
}






