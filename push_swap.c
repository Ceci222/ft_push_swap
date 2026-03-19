#include "push_swap.h"

void	push_swap(int argc, char **argv)
{
	t_stack		*stack_b;
	t_stack		*stack_a;
	char		**data_parsed;
	t_counter	counter;
	int			bench;
	char		*strategy;
	int 		i;
	float		disorder;

	/* ft_strategy_checker() */
	strategy = NULL;
	bench = 0;
	i = 0;
	disorder = 0;
	
	while (i < argc)
	{
		if (ft_strncmp(argv[i], "--bench", 7) == 0)
			bench = 1;
		else if (ft_strncmp(argv[i], "--simple", 8) == 0)
			strategy = STRATEGY_SIMPLE;
		else if (ft_strncmp(argv[i], "--medium", 8) == 0)
			strategy = STRATEGY_MEDIUM;
		else if (ft_strncmp(argv[i], "--complex", 9) == 0)
			strategy = STRATEGY_COMPLEX;
		else if (ft_strncmp(argv[i], "--adaptive", 10) == 0)
			strategy = STRATEGY_ADAPTIVE;
		i++;
	}

	ft_init_counter(&counter);
	if (!strategy)
    	strategy = STRATEGY_ADAPTIVE;
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
/* 	ft_printf("Disorder: %.\n", ft_compute_disorder(stack_a));
	ft_printf("posicion del minimo: %d\n", find_min_pos(stack_a)); */
	if (is_ordered(stack_a))
	{
		return ;
	}
	disorder = ft_compute_disorder(stack_a);
	if (stack_a->size == 2)
		sort_two(stack_a, &counter);
 	else if (stack_a->size == 3)
		sort_three(stack_a, &counter);
	else if (stack_a->size == 4)
		sort_four(stack_a, stack_b, &counter);
	else if (stack_a->size == 5)
		sort_five(stack_a, stack_b, &counter);
	else if (stack_a->size > 5)
	{
		if (ft_strcmp(strategy, STRATEGY_SIMPLE) == 0)
			sort_simple(stack_a, stack_b, &counter);
		else if (ft_strcmp(strategy, STRATEGY_MEDIUM) == 0)
			sort_chunks(stack_a, stack_b, &counter);
		else if (ft_strcmp(strategy, STRATEGY_COMPLEX)== 0)
			sort_turk(stack_a, stack_b, &counter);
		else
			sort_adaptive(stack_a, stack_b, &counter, disorder);

	} 
		//
/* 	printf("Cantidad de movimientos sa: %d\n", counter.sa);
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
	ft_printf("Cantidad de movimientos total: %d\n", counter.total); */
	if (bench == 1)
		ft_print_benchmark(&counter, disorder, strategy);
	free_and_print(stack_a, stack_b, data_parsed); 
}

int	main(int argc, char **argv)
{
	push_swap(argc, argv);
	return (0);
}

