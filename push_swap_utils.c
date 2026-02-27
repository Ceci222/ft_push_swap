#include "push_swap.h"

t_list	*ft_lstnew_num(long content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node -> content = content;
	new_node -> next = NULL;
	new_node -> prev = NULL;
	new_node -> index = 0;
	return (new_node);
}

int	is_duplicate(t_list *stack_a, long num)
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

