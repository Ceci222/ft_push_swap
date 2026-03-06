#include "push_swap.h"

void	ft_lstadd_back(t_node **lst, t_node *new)
{
	t_node	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last -> next = new;
	return ;
}
/*
#include <stdio.h>
int	main(void)
{
	t_node	*back;
	t_node	*my_list;
	char	*text1;
	char	*text2;
	
	text1 = "Ser o no ser";
	text2 = "he ahí el dilema...";
	my_list = ft_lstnew(text2);
	back = ft_lstnew(text1);
	ft_lstadd_back(&my_list, back);
	printf("Resultado 1: %s\n", (char *) my_list -> content);
	printf("Resultado 2: %s\n", (char *) my_list -> next -> content);
	free(back);
	free(my_list);
	return (0);
}
*/