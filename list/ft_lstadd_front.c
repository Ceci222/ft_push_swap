/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cscaroni <cscaroni@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 18:41:32 by lajen-li          #+#    #+#             */
/*   Updated: 2026/02/23 17:38:11 by cscaroni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
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
	t_list	*prev;
	t_list	*my_list;
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