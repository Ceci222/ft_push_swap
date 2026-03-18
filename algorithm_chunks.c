#include "push_swap.h"

static	int	find_max_pos(t_stack *stack_a)
{
	int		index;
	int		current_max_num_position;//position of current max num
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
		current= current->next;
	}
	return (current_max_num_position);
}

static	int	find_max_num(t_stack *stack_a)
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

static	int	ft_sqrt(int	size)
{
	int	i;

	i = 0;
	while (i * i <= size)
	{
		if (i * i == size)
			return (i);
		i++;
	}
	return (i);
}

void	sort_chunks(t_stack *stack_a, t_stack *stack_b, t_counter *counter)
{
	int i;
	int size;
	int	min_in_chunk;
	int	max_in_chunk;
	int min_value;
	long	range;
	int	num_of_chunks;
	int	checked_items;

	i = 0;
	min_value = find_min_num(stack_a);
	size = stack_a->size;
	range = find_max_num(stack_a) - find_min_num(stack_a);
	num_of_chunks = ft_sqrt(size);

	while (i < num_of_chunks)
	{
		min_in_chunk =  min_value + i * range / num_of_chunks;
		max_in_chunk =  min_value + (i + 1) * range / num_of_chunks;//aqui pusimos max_value :S. Nos e usaba, lo borré
		checked_items = 0;
		size = stack_a->size;
		while (checked_items < size) //aqui usabamos stack_a->size pero como decrecia en cada pb daba error :S
		{
			if (!stack_a->top)
        		break ; //si se vacia el stack (ej, estan ordenados los del chunk) da segmentation fault
			if (stack_a->top->content >= min_in_chunk 
				&& stack_a->top->content <= max_in_chunk)
				pb(stack_a, stack_b, counter);
			else
				ra(stack_a, counter);
			checked_items++;
		}
		i++;
	}
	while (stack_a->size > 0)//no se vaciaba completamente por el redondeo, entonces mientras haya algo que lo pase a b
		pb(stack_a, stack_b, counter);
	final_order_and_push(stack_a, stack_b, counter);
}

void	final_order_and_push(t_stack *stack_a, t_stack *stack_b, t_counter *counter)
{

	int	max_pos;
	int	max_val; //la declarabamos arriba pero la usabamos aquí :S

	while (stack_b->size != 0)
	{
		max_pos = find_max_pos(stack_b);
		max_val = find_max_num(stack_b);
		if (max_pos <= stack_b-> size/2)
		{
			while (stack_b->top->content != max_val)
				rb(stack_b, counter);
		}
		else
		{
			while (stack_b->top->content != max_val)
				rrb(stack_b, counter);
		}
		pa(stack_a, stack_b, counter);
	}
}
