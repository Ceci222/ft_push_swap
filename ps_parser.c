#include "push_swap.h"

char	**ft_parser(int argc, char **argv)
{
	int		i;
	char	*temp;
	char	**final_data;
	char	*full_string;

	i = 1;
	full_string = ft_strdup("");
	if (argc == 2)
	{
		free(full_string);
		full_string = ft_strdup(argv[i]);
	}
	else if (argc > 2)
	{
		while (i < argc)
		{
			temp = ft_strjoin(full_string, " ");
			free(full_string);
			full_string = ft_strjoin(temp, argv[i]);
			free(temp);
			i++;
		}
	}
	final_data = ft_split(full_string, ' ');
	return (free(full_string), final_data);
}

t_stack	*ft_fill_stack(char **arg)
{
	int		i;
	long	num;
	t_node	*number_node;
	t_stack	*stack_a;

	stack_a = ft_create_stack();
	i = 0;
	while (arg[i])
	{
		if (is_right_number(arg[i]))
		{
			num = ft_atol(arg[i]);
			if (num > 2147483647 || num < -2147483648)
				return (ft_free_stack(stack_a), ft_error(), NULL);
			number_node = ft_create_node(num);
			printf("Valor del nodo: %ld\n", number_node->content);
			if (is_duplicate(stack_a, num))
				return (ft_free_stack(stack_a), NULL);
			ft_node_to_bottom(stack_a, number_node -> content);
			free(number_node);
		}
		else
			return (ft_free_stack(stack_a), ft_error(), NULL);
		i++;
	}
	ft_print_stack(stack_a);
	ft_free_stack(stack_a);
	return (stack_a);
}
