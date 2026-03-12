#include "push_swap.h"

void	sort_five(t_stack *stack_a, t_stack *stack_b)
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
		pb(stack_a, stack_b);
		sort_four(stack_a, stack_b);
		pa(stack_a, stack_b);
	}
	if (second < first && second < third && second < fourth && second < fifth)
	{
		sa(stack_a);
		pb(stack_a, stack_b);
		sort_four(stack_a, stack_b);
		pa(stack_a, stack_b);
	}
	if (third < first && third < second && third < fourth && third < fifth )
	{
		ra(stack_a);
		ra(stack_a);
		pb(stack_a, stack_b);
		sort_four(stack_a, stack_b);
		pa(stack_a, stack_b);
	}
	if (fourth < first && fourth < second && fourth < third && fourth < fifth)
	{
		rra(stack_a);
		rra(stack_a);
		pb(stack_a, stack_b);
		sort_four(stack_a, stack_b);
		pa(stack_a, stack_b);
	}
	if (fifth < fourth && fifth < third && fifth < second && fifth < first)
	{
		rra(stack_a);
		pb(stack_a, stack_b);
		sort_four(stack_a, stack_b);
		pa(stack_a, stack_b);
	}
	return ;
}
