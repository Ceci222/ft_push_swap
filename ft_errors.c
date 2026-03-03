#include "push_swap.h"

void	ft_error(void)
{
	write(2, "Error\n", 6);
	return ;
}

void	ft_free_lst(t_list *stack_a)
{
	t_list *next;

	while (stack_a) {
		next = stack_a->next;
		free(stack_a);
		stack_a = next;
	}
	free(stack_a);
}
void	ft_free_char(char **data_parsed)
{
	int i;
	
	i = 0;
	while (data_parsed[i])
	{
		free(data_parsed[i]);
		i++;
	}
	free(data_parsed);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t		i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}