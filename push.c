#include "push_swap.h"

void	pa(t_stack *a, t_stack *b, t_counter *count)
{
	t_node	*tmp;

	if (!b || b->size == 0)
		return ;
	if (!a)
		return ;
	tmp = b->top;
	b->top = tmp->next;
	if (b->top)
		b->top->prev = NULL;
	else
		b->bottom = NULL;
	tmp->next = a->top;
	if (a->top)
		a->top->prev = tmp;
	else
		a->bottom = tmp;
	tmp->prev = NULL;
	a->top = tmp;
	a->size++;
	b->size--;
	if (count)
		count->pa++;
	write(1, "pa", 2);
	write(1, "\n", 1);
}
void	pb(t_stack *a, t_stack *b, t_counter *count)
{
	t_node	*tmp;

	if (!a || a->size == 0)
		return ;
	if (!b)
		return ;
	tmp = a->top;
	a->top = tmp->next;
	if (a->top)
		a->top->prev = NULL;
	else
		a->bottom = NULL;
	tmp->next = b->top;
	if (b->top)
		b->top->prev = tmp;
	else
		b->bottom = tmp;
	tmp->prev = NULL;
	b->top = tmp;
	a->size--;
	b->size++;
	if (count)
		count->pb++;
	write(1, "pb", 2);
	write(1, "\n", 1);
}
