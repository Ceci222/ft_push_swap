#include "push_swap.h"

void	pb(t_stack *a, t_stack *b)
{
	t_node *tmp;

	if (!a || a->size == 0)
		return;
	if (!b)
    	return;
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
	write(1, "pb", 1);
/* REDUNDANTE, NO HACE FALTA
	if (a->size == 0)
    {
        a->top = NULL;
        a->bottom = NULL;
    } */
}
