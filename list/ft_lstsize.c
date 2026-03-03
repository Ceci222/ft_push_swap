/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lajen-li <lajen-li@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 12:09:02 by lajen-li          #+#    #+#             */
/*   Updated: 2026/03/03 13:40:46 by lajen-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstsize(t_node *lst)
{
	int		count;
	t_node	*aux;

	aux = lst;
	count = 0;
	while (aux)
	{
		aux = aux -> next;
		count++;
	}
	return (count);
}
/*
#include <stdio.h>

int	main(void)
{
	t_node	*top;
	t_node	*temp;
	int		res;

	top = NULL;
	ft_lstadd_front(&top, ft_lstnew("1"));
	ft_lstadd_front(&top, ft_lstnew("2"));
	ft_lstadd_front(&top, ft_lstnew("3"));
	ft_lstadd_front(&top, ft_lstnew("4"));
	res = ft_lstsize(top);
	printf("%d\n", res);
	while (top != NULL)
	{
		temp = top -> next;
		free(top);
		top = temp;
	}
	return (0);
}
*/