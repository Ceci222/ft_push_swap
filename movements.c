#include "push_swap.h"

void	swap_a_or_b(t_stack	*stack)
{
	long tmp;
	if (!stack || stack->size < 2)
		return ;
	tmp =  stack->top->content;
	stack->top->content = stack->top->next->content;
	stack->top->next->content = tmp;
}

void	swap_bottom_to_prev(t_stack	*stack)
{
	long tmp;
	if (!stack || stack->size < 2)
		return ;
	tmp =  stack->bottom->content;
	stack->bottom->content = stack->bottom->prev->content;
	stack->bottom->prev->content = tmp;
}
