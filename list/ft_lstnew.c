/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cscaroni <cscaroni@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 17:15:37 by lajen-li          #+#    #+#             */
/*   Updated: 2026/02/23 17:39:02 by cscaroni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
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
	t_list	*node;
	char 	*text;

	text = "Hola, mundo!";
	node = ft_lstnew(text);
	printf("El contenido del nodo: %s\n", (char *)node->content);
	free(node);
	return (0);
}
*/