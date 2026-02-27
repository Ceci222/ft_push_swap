/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lajen-li <lajen-li@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 11:49:11 by lajen-li          #+#    #+#             */
/*   Updated: 2026/02/27 19:13:00 by lajen-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push_swap(int argc, char **argv)
{
	int i;
	long num;
	t_list	*number_node;
 	t_list	*stack_a;

	stack_a = NULL;
	i = 1;
	/* if (!argv)
		return ; */
	while (i < argc)
	{
		if (is_right_number(argv[i]))
		{
			num = ft_atol(argv[i]);
			if (num > 2147483647 || num < -2147483648)
			{
				return (ft_error());
			}
			if (is_duplicate(stack_a, num))
			{
				ft_free(stack_a);
				return ;
			}
			number_node = ft_lstnew(num);
			ft_lstadd_back(&stack_a, number_node);
			i++;
		}
		else
		{
			ft_free(stack_a);
			return (ft_error());
		}
	}
}

int main(int argc, char **argv)
{
	push_swap(argc, argv);
}
