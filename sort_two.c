#include "push_swap.h"

void	sort_two(t_stack *stack)
{
	t_node	*first;
	t_node	*second;

	first = stack->top;
	second = first->next;
	if (first->content < second->content)
		return ;
	else
		sa(stack);
}
