#include "push_swap.h"

void	ft_error(void)
{
	write(2, "Error\n", 6);
	return ;
}

void	ft_free_stack(t_stack *stack)
{
	t_node	*current;
	t_node	*next;

	if (!stack)
		return ;
	current = stack -> top;
	while (current)
	{
		next = current -> next;
		free(current);
		current = next;
	}
	free(stack);
}

void	ft_free_char(char **data_parsed)
{
	int	i;

	i = 0;
	while (data_parsed[i])
	{
		free(data_parsed[i]);
		i++;
	}
	free(data_parsed);
}

