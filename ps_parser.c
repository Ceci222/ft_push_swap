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
int	ft_is_valid_num(char *str)
{
	int		i;
	long	num;

	i = 0;
	while (str)
	{	
		if (is_right_number(str[i]))
		{
			num = ft_atol(str[i]);
			if (num > 2147483647 || num < -2147483648)
				return (ft_error(), NULL);
			i++;
		}
		else
		{
			return (ft_error(), NULL);
		}
	}
	return (num);
}
t_stack	*ft_fill_stack(char **arg, t_stack *stack_a)
{
	int i;
	long num;
	t_node	*number_node;
 	t_stack	*stack_a;

	stack_a = ft_create_stack();
	i = 0;
	while (arg[i])
	{	
		num = ft_is_valid_num(arg[i]);	
		number_node = ft_lstnew_num(num);
		if (is_duplicate(number_node, num))
			return (ft_free_lst(stack_a), NULL);
		ft_lstadd_back(&stack_a, number_node);
		i++;
	}
	else
	{
		return (ft_free_stack(stack_a), ft_error(), NULL);
	}
	//ft_free_lst(stack_a);
	ft_print_stack(stack_a);
	return(stack_a);
}
