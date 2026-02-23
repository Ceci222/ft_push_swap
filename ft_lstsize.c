/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cscaroni <cscaroni@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 12:09:02 by lajen-li          #+#    #+#             */
/*   Updated: 2026/02/23 17:38:54 by cscaroni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*aux;

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
	t_list	*top;
	t_list	*temp;
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