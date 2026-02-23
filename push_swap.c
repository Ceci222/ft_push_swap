/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lajen-li <lajen-li@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 11:49:11 by lajen-li          #+#    #+#             */
/*   Updated: 2026/02/23 14:01:02 by lajen-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


void push_swap(int argc, char **argv)
{
	int	arg_num;
	char **clean_array;
	int i;
	
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
