/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lajen-li <lajen-li@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 11:38:53 by lajen-li          #+#    #+#             */
/*   Updated: 2026/02/25 16:43:50 by lajen-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_parser(int argc, char **argv)
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
}

int	main(void)
{
	
}