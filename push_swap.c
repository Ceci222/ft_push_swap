#include "push_swap.h"

void	push_swap(int argc, char **argv)
{
	t_stack	*stack_b;
	t_stack	*stack_a;
	char	**data_parsed;
	t_counter	counter;

	ft_init_counter(&counter);
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
		sort_two(stack_a, &counter);
 	if (stack_a->size == 3)
		sort_three(stack_a, &counter);
	if (stack_a->size == 4)
		sort_four(stack_a, stack_b, &counter);
	if (stack_a->size == 5)
		sort_five(stack_a, stack_b, &counter);
	printf("Cantidad de movimientos sa: %d\n", counter.sa);
	printf("Cantidad de movimientos sb: %d\n", counter.sb);
	printf("Cantidad de movimientos ss: %d\n", counter.ss);
	printf("Cantidad de movimientos pb: %d\n", counter.pb);
	printf("Cantidad de movimientos pa: %d\n", counter.pa);
	printf("Cantidad de movimientos ra: %d\n", counter.ra);
	printf("Cantidad de movimientos rb: %d\n", counter.rb);
	printf("Cantidad de movimientos rr: %d\n", counter.rr);
	printf("Cantidad de movimientos rra: %d\n", counter.rra);
	printf("Cantidad de movimientos rrb: %d\n", counter.rrb);
	printf("Cantidad de movimientos rrr: %d\n", counter.rrr);
	ft_printf("Cantidad de movimientos total: %d\n", counter.total);
	
	free_and_print(stack_a, stack_b, data_parsed);
}

int	main(int argc, char **argv)
{
	push_swap(argc, argv);
	return (0);
}
