#include "push_swap.h"

t_node	*ft_create_node(long content)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (!new_node)
		return (NULL);
	new_node -> content = content;
	new_node -> next = NULL;
	new_node -> prev = NULL;
	return (new_node);
}

int	is_duplicate(t_stack *stack, long num)
{
	t_node	*current;

	if (!stack)
		return (0);
	current = stack -> top;
	while (current != NULL)
	{
		if (current -> content == num)
		{
			ft_error();
			return (0);
		}
		current = current -> next;
	}
	return (0);
}
int	is_right_number(char *str)
{
	int i;
	
	i = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}
void	ft_print_stack(t_stack *stack)
{
    t_node *current;

    if (!stack) 
		return;
    current = stack->bottom; // Accedemos al primer nodo a través de la estructura
    while (current != NULL)
    {
        printf("%ld ", current->content);
        current = current->prev;
    }
    printf("\n");
}
t_stack	*ft_create_stack()
{
	t_stack	*stack;
	stack = (t_stack *)malloc(sizeof(t_stack));
	if (!stack)
		return (NULL);
	stack -> top = NULL;
	stack -> bottom = NULL;
	stack -> size = 0;
	return (stack);
}

void	ft_node_to_bottom(t_stack *stack, long value)
{
	t_node	*new;

	if (!stack)
		return ;
	new = ft_create_node(value);
	if (stack->size == 0)
	{
		stack->top = new;
		stack->bottom = new;
	}
	else
	{
		new->next = stack->top;
		stack->top->prev = new;
		stack->top = new;
	}	
	stack->size++;
}
/*
- El stack tiene dos punteros. Uno que apunta al primer nodo del mismo y otro que apunta al último nodo. 

  new->next = stack->top; 
- El puntero next de nuevo nodo aputa a donde stack está apuntando como top (el nodo que va a ser reemplazado en la primera posición por el nuevo).

- Cuando sólo hay un nodo en el stack, ambos punteros apuntan al mismo nodo.

- Cuando ya hay algo en el stack, al meter un nuevo nodo, este pasa a ocupar el primer lugar en el stack.

- Entonces, el puntero que inicialmente apuntaba a top (el primer nodo que ha ahora ha sido desplazando a segundo lugar) ahora apunta al nuevo nodo que he metido. 

- Y el nodo anterior se está moviendo al final del stack con cada nuevo nodo añadido. 

- Con esto el que incialmente era el primer nodo, al ser desplazado, cada vez se mueve más hacia el final de la lista con lo que bottom siempre apunta a él,
al menos en nuestro código que siempre agrega top).

stack->top->prev = new; 
- Aquí el antiguo top (el nodo al que apuntaba el puntero top del stack), ahora tiene como previo a new. 
Con esto hace que el que antes era el primer nodo, y que ha sido desplazado, apunte a él.

stack->top = new;
- Y aquí reasigno para que top (el puntero del stack) apunte a new. 

stack->size++;
Y por cada elemento que meto al stack, incremento size en 1.
*/