#include "push_swap.h"

void	push_swap(int argc, char **argv)
{
	t_stack	*stack_b;
	t_stack	*stack_a;
	char	**data_parsed;

	stack_b = ft_create_stack();
	data_parsed = ft_parser(argc, argv);
	stack_a = ft_fill_stack(data_parsed);
	if (!stack_a || !stack_b)
	{
		ft_free_stack(stack_b);
		ft_free_stack(stack_a);
		ft_free_char(data_parsed);
		return ;
	}
	if (stack_a->size == 2)
		sort_two(stack_a);
 	if (stack_a->size == 3)
		sort_three(stack_a);
	if (stack_a->size == 4)
		sort_four(stack_a, stack_b);
	if (stack_a->size == 5)
		sort_five(stack_a, stack_b);

	free_and_print(stack_a, stack_b, data_parsed);
}

int	main(int argc, char **argv)
{
	push_swap(argc, argv);
	return (0);
}
