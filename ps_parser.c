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
void	ft_check(char **arg)
{
	int i;
	long num;
	t_node	*number_node;
 	t_node	*stack_a;
	
	i = 0;
	stack_a = NULL;
	while (arg[i])
	{	
		if (is_right_number(arg[i]))
		{
			num = ft_atol(arg[i]);
			if (num > 2147483647 || num < -2147483648)
				return (ft_free_lst(stack_a), ft_error());
			if (is_duplicate(stack_a, num))
				return (ft_free_lst(stack_a),(void)0) ;
			number_node = ft_lstnew(num);
			ft_lstadd_back(&stack_a, number_node);
			i++;
		}
		else
			return (ft_free_lst(stack_a), ft_error());
	}
	//ft_free_lst(stack_a);
	ft_print_stack(stack_a);
}