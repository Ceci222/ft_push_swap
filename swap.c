#include "push_swap.h"

void	swap_one(t_stack *stack)
{
	t_node	*tmp_top;
	t_node	*tmp_second;

	if (!stack || stack->size < 2)
		return ;
	tmp_top = stack->top;
	tmp_second = stack->top->next;
	tmp_top->prev = tmp_second;
	if (stack->size == 2)
		tmp_top->next = NULL;
	else
		tmp_top->next = tmp_second->next;
	stack->top = tmp_second;
	stack->top->next = tmp_top;
	stack->top->prev = NULL;
	if (tmp_top->next == NULL)
		stack->bottom = tmp_top;
	else
		tmp_top->next->prev = tmp_top;
}

void	sa(t_stack *a, t_counter *count)
{
	swap_one(a);
	if(count)
		count->sa++;
	write(1, "sa", 2);
	write(1, "\n", 1);
}

void	sb(t_stack *b, t_counter *count)
{
	swap_one(b);
	if(count)
		count->sb++;
	write(1, "sb", 2);
	write(1, "\n", 1);
}

void	ss(t_stack *a, t_stack *b, t_counter *count)
{
	swap_one(a);
	swap_one(b);
	if(count)
		count->ss++;
	write(1, "ss", 2);
	write(1, "\n", 1);
}
