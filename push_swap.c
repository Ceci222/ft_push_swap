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
	push_swap(argc, argv);
	return (0);
}