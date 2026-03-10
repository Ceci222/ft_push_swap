#include "push_swap.h"

int	is_duplicate(t_stack *stack, long num)
{
	t_node	*current;

	if (!stack)
		return (1);
	current = stack -> top;
	while (current != NULL)
	{
		if (current -> content == num)
		{
			ft_error();
			return (1);
		}
		current = current -> next;
	}
	return (0);
}

int	is_right_number(char *str)
{
	int	i;

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

long	ft_is_valid_num(char *str)
{
	long	num;

	if (!is_right_number(str))
		return (ft_error(), (0));
	num = ft_atol(str);
	if (num > 2147483647 || num < -2147483648)
		return (ft_error(), (0));
	return (num);
}
