#include "push_swap.h"

void	sort_four(t_stack *stack_a, t_stack *stack_b)
{
	t_node	*first;
	t_node	*second;
	t_node	*third;
	t_node	*fourth;

	first = stack_a->top;
	second = first->next;
	third = second ->next;
	fourth = stack_a->bottom;

	/* if (first->content < second->content && second->content < third->content 
		&& third->content < fourth->content)
		return ; */
	if (first->content < second->content && first->content < third-> content 
		&& first->content < fourth->content && third->content > fourth->content)
	{
		pb(stack_a, stack_b);
		sort_three(stack_a);
		pa(stack_a, stack_b);
	}
	if (second->content < first->content && second->content < third-> content 
		&& second->content < fourth->content)
	{
		sa(stack_a);
		pb(stack_a, stack_b);
		sort_three(stack_a);
		pa(stack_a, stack_b);
	}
	if (third->content < fourth->content && third->content < second-> content 
		&& third->content < first->content)
	{
		ra(stack_a);
		ra(stack_a);
		pb(stack_a, stack_b);
		sort_three(stack_a);
		pa(stack_a, stack_b);
	}
	if (fourth->content < third->content && fourth->content < second-> content 
		&& fourth->content < first->content)
	{
		rra(stack_a);
		pb(stack_a, stack_b);
		sort_three(stack_a);
		pa(stack_a, stack_b);
	}
	return ;
}
