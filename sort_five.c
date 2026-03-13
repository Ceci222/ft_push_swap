#include "push_swap.h"

void	sort_five(t_stack *stack_a, t_stack *stack_b, t_counter *counter)
{
	long	first;
	long	second;
	long	third;
	long	fourth;
	long	fifth;

	first = stack_a->top->content;
	second = stack_a->top->next->content;
	third = stack_a->top->next->next->content;
	fourth = stack_a->top->next->next->next->content;
	fifth = stack_a->bottom->content;

	if (first < second && second < third 
		&& third < fourth && fourth < fifth)
		return ;
	if (first < second && first < third && first < fourth && first < fifth)
	{
		pb(stack_a, stack_b, counter);
		sort_four(stack_a, stack_b, counter);
		pa(stack_a, stack_b, counter);
	}
	if (second < first && second < third && second < fourth && second < fifth)
	{
		sa(stack_a, counter);
		pb(stack_a, stack_b, counter);
		sort_four(stack_a, stack_b, counter);
		pa(stack_a, stack_b, counter);
	}
	if (third < first && third < second && third < fourth && third < fifth )
	{
		ra(stack_a, counter);
		ra(stack_a, counter);
		pb(stack_a, stack_b, counter);
		sort_four(stack_a, stack_b, counter);
		pa(stack_a, stack_b, counter);
	}
	if (fourth < first && fourth < second && fourth < third && fourth < fifth)
	{
		rra(stack_a, counter);
		rra(stack_a, counter);
		pb(stack_a, stack_b, counter);
		sort_four(stack_a, stack_b, counter);
		pa(stack_a, stack_b, counter);
	}
	if (fifth < fourth && fifth < third && fifth < second && fifth < first)
	{
		rra(stack_a, counter);
		pb(stack_a, stack_b, counter);
		sort_four(stack_a, stack_b, counter);
		pa(stack_a, stack_b, counter);
	}
	return ;
}
