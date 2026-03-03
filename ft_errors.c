#include "push_swap.h"

void	ft_error(void)
{
	write(2, "Error\n", 6);
	return ;
}

void	ft_free_stack(t_stack *stack)
{
	t_node *current;
	t_node *next;

	if (!stack)
		return ;
	
	current = stack -> top;
	while (current) {
		next = current -> next;
		free(current);
		current = next;
	}
	free(stack);
}
void	ft_free_char(char **data_parsed)
{
	int i;
	
	i = 0;
	while (data_parsed[i])
	{
		free(data_parsed[i]);
		i++;
	}
	free(data_parsed);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t		i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}