#include "push_swap.h"

void	sort_four(t_stack *stack_a, t_stack *stack_b, t_counter *counter)
{
	long	first;
	long	second;
	long	third;
	long	fourth;

	first = stack_a->top->content;
	second = stack_a->top->next->content;
	third = stack_a->top->next->next->content;
	fourth = stack_a->bottom->content;

	if (first < second && second < third && third < fourth)
		return ;
	if (second < first && second < third && second < fourth)
		sa(stack_a, counter);
	else if (second < first && second < third && second < fourth)
		return(sa(stack_a, counter), (void)(0));
	if (third < fourth && third < second && third < first)
	{
		ra(stack_a, counter);
		ra(stack_a, counter);
	}
	if (fourth < third && fourth < second && fourth < first)
		rra(stack_a, counter);
	pb(stack_a, stack_b, counter);
	sort_three(stack_a, counter);
	pa(stack_a, stack_b, counter);
	return ;
}
