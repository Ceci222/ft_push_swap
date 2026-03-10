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
	pb(stack_a, stack_b);
	pb(stack_a, stack_b);
	pb(stack_a, stack_b);
	sa(stack_a);
	rra(stack_a);
	rrb(stack_b);
	rrr(stack_a, stack_b);
	//ss(stack_a, stack_b);
	//sb(stack_b);
	free_and_print(stack_a, stack_b, data_parsed);
	/* ft_print_stack(stack_b);
	ft_free_stack(stack_b);
	ft_print_stack(stack_a);
	ft_free_stack(stack_a);
	ft_free_char(data_parsed); */
}

int	main(int argc, char **argv)
{
/*	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a -> top = NULL;
	stack_a -> size = 0;
	stack_b -> top = NULL;
	stack_b -> size = 0; */
	push_swap(argc, argv);
	return (0);
}
