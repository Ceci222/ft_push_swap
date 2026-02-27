/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cscaroni <cscaroni@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 11:49:11 by lajen-li          #+#    #+#             */
/*   Updated: 2026/02/27 18:18:22 by cscaroni         ###   ########.fr       */
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
			
			return (ft_error());
		}
	}
}

	
/* 	clean_array = ft_split(argv[1], " ");
	while (clean_array[i])
	{
		printf("%s", clean_array[i]);
		i++;
	}
	
	 arg_num = ft_atoi((const char *)argv);
	if (!argv)
		ft_printf("Error - Insert number");
		return ;
	 
	return ;
}*/
	
int main(int argc, char **argv)
{
	push_swap(argc, argv);
	//free(argv);
}
