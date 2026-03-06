# Push B (pb)
```c
void	pb(t_stack *a, t_stack *b)
{
	t_node *tmp;

	if (!a || a->size == 0)
		return;
    //guardar el nodo que quiero mover
	tmp = a->top;
    //mover el segundo nodo a la posicion top de a
	a->top = tmp->next;
    //hacer que el nuevo nodo top apunte a null
	if (a->top)
		a->top->prev = NULL;// si existe
    else
        a->bottom = NULL;//si no existe a top deberia ser un stack vacío y a bottom no deberia existir tampoco 

    //inserto el ex nodo top de a en la cabeza del stack b
	tmp->next = b->top;
	if (b->top)
		b->top->prev = tmp;//si hay un nodo top este sera desplazado y su prev apuntará a temp
    else
        b->bottom = tmp;//si no hay top es que el stack estaba vacío y tmp será el últmo nodo y tambien el primero como lo indico más abajo b->top = tmp;
	tmp->prev = NULL;
	b->top = tmp;

    a->size--;
	b->size++;

/*     if (a->size == 0) //si el stack de donde quité el nodo queda vacío debo asignar su top y bottom a null
    {
        a->top = NULL;
        a->bottom = NULL;
    } */
}
```

```c
#include "push_swap.h"

void	pa(t_stack *a, t_stack *b)
{
	t_node *tmp;

	if (!b || b->size == 0)
		return;
	tmp = b->top;//backup
	b->top = tmp->next;//al segundo elemento le asigno posción top
	if (b->top)
		b->top->prev = NULL; //hago que el nuevo top apunte a null
    else //si me ha quedado la lista vacía
        b->bottom = NULL; //el puntero de bottom debe actuaizarse y apuntar a null
	tmp->next = a->top; //el temporal de mi elemento a mover va a apuntar a la cabeza del stack al que va
	if (a->top)
		a->top->prev = tmp; //si había algo en esa posición ahora será segundo elemento así que su previo será mi temporal
    else //si no existía la lista estaba vacía 
        a->bottom = tmp; //el ultimo elemento de la lista y el primero sera mi tmp
	tmp->prev = NULL; //como ahora es top apunta null
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
```