/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lajen-li <lajen-li@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 13:13:43 by lajen-li          #+#    #+#             */
/*   Updated: 2026/02/26 19:06:50 by lajen-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_right_number(char *str)
{
	int i;
	
	i = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	/* while (str[i])
	{
		if (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		{	
			ft_error();
			return (0);
		}
		i++;
	} */
	// VERIFICAR SI HACE FALTA
	return (1);
}
/* 
int	is_duplicate(char **argv)
{
	int	i;
	int	j;

	if (!argv)
		return (0);
	i = 1;
	while (argv[i] != NULL)
	{
		j = i + 1;
		while(argv[j] != NULL)
		{
			if (ft_strcmp(argv[i], argv[j]) == 0)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
} */
