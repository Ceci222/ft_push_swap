/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cscaroni <cscaroni@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 16:04:20 by lajen-li          #+#    #+#             */
/*   Updated: 2026/02/23 17:38:18 by cscaroni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del || !*lst)
		return ;
	while (*lst)
	{
		temp = (*lst)-> next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	*lst = NULL;
	return ;
}
/*
#include <stdio.h>

void	delete_str(void *content)
{
	free(content);
	return ;
}
int main(void)
{
	t_list	*my_list;
	char	*str;

	str = ft_strdup("eliminar esto");
	my_list = ft_lstnew(str);
	printf("Esto es lo que habia antes %s\n", (char *)my_list -> content);
	ft_lstclear(&my_list, delete_str);
	if (my_list == NULL)
		printf("Lista borrada con exito!\n");
	return (0);
}
*/