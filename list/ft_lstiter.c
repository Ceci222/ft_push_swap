/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lajen-li <lajen-li@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 12:12:58 by lajen-li          #+#    #+#             */
/*   Updated: 2026/03/03 13:40:46 by lajen-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstiter(t_node *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst != NULL)
	{
		f(lst -> content);
		lst = lst -> next;
	}
	return ;
}
/*
#include <stdio.h>

void	put_str(void *content)
{
	printf("%s\n", (char *)content);
	return ;
}

int	main(void)
{
	t_node	*my_list;

	my_list = ft_lstnew(ft_strdup("Primer nodo"));
	my_list -> next = ft_lstnew(ft_strdup("Segundo nodo"));
	ft_lstiter(my_list, put_str);
	ft_lstclear(&my_list, free);
	return (0);
}
*/