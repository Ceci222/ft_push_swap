/* j = 0;
	while (final_data[j] != NULL)
   		{
			printf("Palabra %d: %s\n", j, final_data[j]);
   		    free(final_data[j]);
   		    j++;
   		}
   		free(final_data); */

/* void	ft_parser(int argc, char **argv)
{
	int	i;
	char **data;
	
	data = ft_strdup("");
	i = 1;
	if (argc == 2)
		// hay que tratarlo como texto
		data = ft_split(argv[1], '\n');//luego ver como continuar
	else if (argc > 2)
		// hay que tratarlo como números individuales
		while (argc > 1)
			data = ft_strjoin(argv[i], argv[i + 1]);
			i++;
} */
	/* if (!argv)clear
		return ; */
/* 	if (argc == 3)
	{
		data = ft_strjoin(argv[0], argv[1]);
		res = ft_split(data, ' ');
		while (res[i] != NULL)
   		{
			printf("Palabra %d: %s\n", i, res[i]);
   		    free(res[i]);
   		    i++;
   		}
   		free(res);
	} */
//Comentarios del archivo push_swap_utils.c
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
/* #include "push_swap.h"

void	swap_a_or_b(t_stack	*stack)
{
	long tmp;
	if (!stack || stack->size < 2)
		return ;
	tmp =  stack->top->content;
	stack->top->content = stack->top->next->content;
	stack->top->next->content = tmp;
}

void	swap_bottom_to_prev(t_stack	*stack)
{
	long tmp;
	if (!stack || stack->size < 2)
		return ;
	tmp =  stack->bottom->content;
	stack->bottom->content = stack->bottom->prev->content;
	stack->bottom->prev->content = tmp;
} */