#include "push_swap.h"

void	sort_three(t_stack *stack)
{
	t_node	*first;
	t_node	*second;
	t_node	*third;

	first = stack->top;
	second = first->next;
	third = second ->next;

/* 	if (first->content < second->content && second->content < third->content)
		return ; */
	if (first->content < second->content && third->content < second->content
		&& first->content > third->content)
		return(rra(stack),(void)(0));
	if (first->content > second->content && second->content > third->content)
		return(sa(stack), rra(stack),  (void)(0));
	if (first->content < second->content && second->content > third->content
		&& first->content <  third->content)
		return(rra(stack), sa(stack), (void)(0));
	if (first->content > second->content && second->content < third->content
		&& first->content < third->content)
		return(sa(stack), (void)(0));
	if (first->content > second->content && second->content < third->content 
		&& first->content > third->content)
		return(ra(stack), (void)(0));
	return ;
}
