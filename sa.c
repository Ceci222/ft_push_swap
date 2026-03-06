#include "push_swap.h"

void	sa(t_stack *a)
{
	t_node *tmp;

	if (!a || a->size < 2)
		return;
	tmp = a->top;
	a->top = tmp->next;
	a->top->next = tmp;
	a->top->prev = NULL;
	/* if (a->top)
		b->top->prev = NULL;
	else
        b->bottom = NULL; */
	tmp->prev = a->top;
	//up to here
	if (a->top)
		a->top->prev = tmp;
	else
        a->bottom = tmp;
	tmp->prev = NULL;
	a->top = tmp;

    a->size++;
    b->size--;

/*     
	if (b->size == 0)
    {
        b->top = NULL;
        b->bottom = NULL;
    } */

}