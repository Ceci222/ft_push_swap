#include "push_swap.h"

void	pa(t_stack *a, t_stack *b)
{
	t_node *tmp;

	if (!b || b->size == 0)
		return;
	if (!a)
    	return;
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
	write(1, "pa", 1);
/*     
	if (b->size == 0)
    {
        b->top = NULL;
        b->bottom = NULL;
    } */

}
