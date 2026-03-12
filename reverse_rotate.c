#include "push_swap.h"

void	reverse_rotate(t_stack *stack)
{
	t_node	*tmp_bottom;
	t_node	*tmp_top;

	if (stack->size == 1 || stack->size == 0)
		return ;
	else if (stack->size == 2)
		swap_one(stack);

	tmp_bottom = stack->bottom;
	tmp_top = stack->top;
	stack->top->prev = tmp_bottom;

	stack->top = tmp_bottom;
	stack->bottom = stack->bottom->prev;
	tmp_bottom->prev = NULL;
	tmp_bottom->next = tmp_top;
	stack->bottom->next = NULL;
}

void	rra(t_stack *a, t_counter *count)
{
	reverse_rotate(a);
	if(count)
		count->rra++;
	write(1, "rra", 3);
	write(1, "\n", 1);
}

void	rrb(t_stack *b, t_counter *count)
{
	reverse_rotate(b);
	if(count)
		count->rrb++;
	write(1, "rrb", 3);
	write(1, "\n", 1);
}

void	rrr(t_stack *a, t_stack *b, t_counter *count)
{
	reverse_rotate(a);
	reverse_rotate(b);
	if(count)
		count->rrr++;
	write(1, "rrr", 3);
	write(1, "\n", 1);
}