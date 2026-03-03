/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lajen-li <lajen-li@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 18:41:32 by lajen-li          #+#    #+#             */
/*   Updated: 2026/03/03 13:40:46 by lajen-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_front(t_node **lst, t_node *new)
{
	if (!lst || !new)
		return ;
	new -> next = *lst;
	*lst = new;
	return ;
}
/*
#include <stdio.h>
int	main(void)
{
	t_node	*prev;
	t_node	*my_list;
	char	*text1;
	char	*text2;
	
	
	text1 = "Ser o no ser";
	text2 = "he ahí el dilema...";
	my_list = ft_lstnew(text1);
	prev = ft_lstnew(text2);
	ft_lstadd_front(&my_list, prev);
	printf("Resultado 1: %s\n", (char *) my_list -> content);
	printf("Resultado 2: %s\n", (char *) my_list -> next -> content);
	free(my_list -> next);
	free(prev);
	return (0);
}
*/