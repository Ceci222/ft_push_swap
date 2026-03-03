/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cscaroni <cscaroni@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 14:58:14 by lajen-li          #+#    #+#             */
/*   Updated: 2026/02/23 17:38:25 by cscaroni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst -> content);
	free(lst);
	return ;
}
/*
#include <stdio.h>

void	delete_str(void *content)
{
	free (content);
}

int	main(void)
{
	t_list	*node;
	char	*str;

	str = ft_strdup("Esto será eliminado");
	node = ft_lstnew(str);
	printf("Esto es lo que había: %s\n", (char *)node -> content);
	ft_lstdelone(node, delete_str);
	return (0);
}
*/