/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 14:51:36 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/15 17:31:12 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int		main()
{
	int argc = 2;
	char *argv = "4 3 5 1 2";
	int i;
	char **new;
	t_folder *stack_a;
	t_folder *stack_b;
	//int count;
	t_num ssl;

	ssl.count_a = 0;
	ssl.count_b = 0;
	//count = 0;
	stack_b = NULL;
	stack_a = NULL;
	i = 1;
	if (argc == 1)
		return (0);
	else if (argc >= 2)
	{
		while (argc > i)
		{
			new = ft_strsplit(argv, ' ');
			if (check_str(new))
			{
				write(1, "Error\n", 6);
				return (0);
			}
			ssl.count_a += push_swap(new, &stack_a);
			if (ssl.count_a < 0)
				return (-1);
			i++;
		}
		major(&stack_a, &stack_b, &ssl);
		free(new);
	}
	while (stack_a)
	{
		printf("%d ", stack_a->data);
		stack_a = stack_a->next;
	}
	return (0);
}