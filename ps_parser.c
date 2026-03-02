/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lajen-li <lajen-li@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 11:38:53 by lajen-li          #+#    #+#             */
/*   Updated: 2026/03/02 18:13:13 by lajen-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* void	ft_parser(int argc, char **argv)
{
	int	i;
	char **data;
	
	data = ft_strdup("");
	i = 1;
	if (argc == 2)
		// hay que tratarlo como texto
		data = ft_split(argv[1], '\n');//luego ver como continuar
	else if (argc > 2)
		// hay que tratarlo como números individuales
		while (argc > 1)
			data = ft_strjoin(argv[i], argv[i + 1]);
			i++;
} */
	/* if (!argv)clear
		return ; */
/* 	if (argc == 3)
	{
		data = ft_strjoin(argv[0], argv[1]);
		res = ft_split(data, ' ');
		while (res[i] != NULL)
   		{
			printf("Palabra %d: %s\n", i, res[i]);
   		    free(res[i]);
   		    i++;
   		}
   		free(res);
	} */
/* void	ft_parser(int argc, char **argv)
{
	int		i;
	char	temp;
	char	**final_data;
	char	*full_string;

	full_string = ft_strdup("");
	i = 1;
	if (argc == 2)
	{
		free(full_string);
		full_string = ft_strdup(argv[i]);
	}
	else if (argc > 2)
	{
		while (i < argc)
		{	
			temp = ft_strjoin(full_string, " ");
			free(full_string);
			full_string = ft_strjoin(temp, argv[i]);
			free(temp);
			i++;
		}
	}
	final_data = ft_split(full_string, ' ');
	free(full_string);
} */
void ft_check(char **arg)
{
	int j;
	long num;
	t_list	*number_node;
 	t_list	*stack_a;
	
	j = 0;
	stack_a = NULL;
	
	while (arg[j])
	{	
		if (is_right_number(arg[j]))
		{
			num = ft_atol(arg[j]);
			if (num > 2147483647 || num < -2147483648)
			{
				ft_free(stack_a);
				return (ft_error());
			}
			if (is_duplicate(stack_a, num))
			{
				ft_free(stack_a);
				return ;
			}
			number_node = ft_lstnew(num);
			ft_lstadd_back(&stack_a, number_node);
			j++;
		}
		else
		{
			ft_free(stack_a);
			return (ft_error());
		}
		
	}
	ft_free(stack_a);
}

/* j = 0;
	while (final_data[j] != NULL)
   		{
			printf("Palabra %d: %s\n", j, final_data[j]);
   		    free(final_data[j]);
   		    j++;
   		}
   		free(final_data); */