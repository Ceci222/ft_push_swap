#include "push_swap.h"

void push_swap(int argc, char **argv)
{
	char	**data_parsed;

	data_parsed = ft_parser(argc, argv);
	ft_check(data_parsed);
	ft_free_char(data_parsed);
}

int main(int argc, char **argv)
{
/* 	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a -> top = NULL;
	stack_a -> size = 0;
	stack_b -> top = NULL;
	stack_b -> size = 0; */
	push_swap(argc, argv);
	return (0);
}