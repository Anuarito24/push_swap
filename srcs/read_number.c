/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_number.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 13:58:57 by avenonat          #+#    #+#             */
/*   Updated: 2020/01/31 13:59:36 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

t_folder	*read_number(char **argv, t_num *ssl)
{
	int			i;
	char		**new;
	t_folder	*stack_a;

	i = 1;
	ssl->count_a = 0;
	ssl->count_b = 0;
	stack_a = NULL;
	while (argv[i])
	{
		new = ft_strsplit(argv[i], ' ');
		if (check_str(new))
		{
			write(1, "Error\n", 6);
			exit(-1);
		}
		ssl->count_a += push_swap(new, &stack_a);
		if (ssl->count_a < 0)
			exit(-1);
		i++;
		free_new(new);
	}
	return (stack_a);
}
