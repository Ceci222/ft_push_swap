/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cscaroni <cscaroni@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 12:12:58 by lajen-li          #+#    #+#             */
/*   Updated: 2026/02/23 17:38:31 by cscaroni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
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
	t_list	*my_list;

	my_list = ft_lstnew(ft_strdup("Primer nodo"));
	my_list -> next = ft_lstnew(ft_strdup("Segundo nodo"));
	ft_lstiter(my_list, put_str);
	ft_lstclear(&my_list, free);
	return (0);
}
*/