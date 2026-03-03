#include "push_swap.h"

t_node	*ft_lstlast(t_node *lst)
{
	t_node	*aux;

	if (!lst)
		return (NULL);
	aux = lst;
	while (aux -> next)
	{
		aux = aux -> next;
	}
	return (aux);
}
/*
#include <stdio.h>
int	main(void)
{
	t_node	*top;
	t_node	*temp;
	t_node	*res;
	
	top = NULL;
	ft_lstadd_front(&top, ft_lstnew("a"));
	ft_lstadd_front(&top, ft_lstnew("2"));
	ft_lstadd_front(&top, ft_lstnew("3"));
	res = ft_lstlast(top);
	printf("%s\n", (char *)res -> content);
	while(top != NULL)
	{
		temp = top -> next;
		free(top);
		top = temp;
	}
		return (0);
}
*/