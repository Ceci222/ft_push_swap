#include "push_swap.h"

t_node	*ft_lstnew_num(long content)
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

int	is_duplicate(t_node *stack_a, long num)
{
	while (stack_a)
	{
		if (stack_a->content == num)
		{
			ft_error();
			return (1);
		}
		stack_a = stack_a->next;
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
void	ft_print_stack(t_node *stack)
{
	t_node	*current;

	current = stack; // Usamos un auxiliar para no perder la cabeza de la lista
	while (current != NULL)
	{
		printf("%ld ", (long)current -> content); // O printf si no usas tu propia librería
		current = current->next;
	}
	printf("\n");
}