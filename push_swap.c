/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cscaroni <cscaroni@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 11:49:11 by lajen-li          #+#    #+#             */
/*   Updated: 2026/02/23 18:10:18 by cscaroni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push_swap(int argc, char **argv)
{
	int	arg_num;
	char **clean_array;
	int i;
	t_list	*clean_numbers;

	i = 1;
	if (!argv)
		return ;
	while (i < argc)
	{
/* 		if (ft_alpha(argv[i]) == 1)
		{
			write(2, "Error", 5);
			write(2, "\n", 1);
			return ;
		} */
		if (ft_isdigit(argv[i]) == 0)
		{
			if (argv[i] == '+' || argv[i] == '-')
			{
				if (argv[i + 1] == '+' || argv[i + 1] == '-')
				{
					write(2, "Error", 5);
					write(2, "\n", 1);
					return ;
				}
			}
			else
			{
				write(2, "Error", 5);
				write(2, "\n", 1);
				return ;
			}
		}
		else
		{
			clean_numbers = ft_lstnew(ft_atoi(argv)); 
		}
		i++;
	}
	clean_array = ft_split(argv[1], " ");
	while (clean_array[i])
	{
		printf("%s", clean_array[i]);
		i++;
	}
	
	/* arg_num = ft_atoi((const char *)argv);
	if (!argv)
		ft_printf("Error - Insert number");
		return ;
	 */
	return ;
}
int main(int argc, char **argv)
{
	push_swap(argc, argv);
}
