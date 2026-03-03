#include "push_swap.h"

t_node	*ft_lstnew(long content)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (!new_node)
		return (NULL);
	new_node -> content = content;
	new_node -> next = NULL;
	return (new_node);
}
/*
#include <stdio.h>

int main(void)
{
	t_node	*node;
	char 	*text;

	text = "Hola, mundo!";
	node = ft_lstnew(text);
	printf("El contenido del nodo: %s\n", (char *)node->content);
	free(node);
	return (0);
}
*/