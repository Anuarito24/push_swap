/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 14:51:36 by avenonat          #+#    #+#             */
/*   Updated: 2020/01/31 13:38:14 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

int		main(int argc, char **argv)
{
	int			i;
	char		**new;
	t_folder	*stack_a;
	t_folder	*stack_b;
	t_num		ssl;

	ssl.count_a = 0;
	ssl.count_b = 0;
	stack_b = NULL;
	stack_a = NULL;
	i = 1;
	if (argc == 1)
		return (0);
	else if (argc >= 2)
	{
		while (argc > i)
		{
			new = ft_strsplit(argv[i++], ' ');
			looking_str(new, &stack_a, &ssl);
			free_new(new);
		}
		major(&stack_a, &stack_b, &ssl);
		free_stack(&stack_a, &stack_b);
	}
	return (0);
}
