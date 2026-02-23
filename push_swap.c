/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lajen-li <lajen-li@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 11:49:11 by lajen-li          #+#    #+#             */
/*   Updated: 2026/02/23 17:06:56 by lajen-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push_swap(int argc, char **argv)
{
	int	arg_num;
	char **clean_array;
	int i;
	
	i = 1;
	if (!argv)
		return ;
	while (i < argc)
	{
		if (ft_alpha(argv[i]) == 1)
		{
			write(2, "Error", 5);
			write(2, "\n", 1);
			return ;
		}
		if (ft_isdigit(argv[i]) == 0)
		{
			if (argv[i] == '+' || argv[i] == '-')
			
				if (argv[i + 1] == '+' || argv[i + 1] == '-')
				{
					write(2, "Error", 5);
					write(2, "\n", 1);
					return ;
				}
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
