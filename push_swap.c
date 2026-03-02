/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lajen-li <lajen-li@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 11:49:11 by lajen-li          #+#    #+#             */
/*   Updated: 2026/03/02 18:15:36 by lajen-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push_swap(int argc, char **argv)
{
	int 	i;
	int		k;
	char	*temp;
	char	**final_data;
	char	*full_string;

	i = 1;
	full_string = ft_strdup("");
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
	ft_check(final_data);
	k = 0;
	while (final_data[k])
	{
		free(final_data[k]);
		k++;
	}
	free(final_data);
}

int main(int argc, char **argv)
{
	push_swap(argc, argv);
}