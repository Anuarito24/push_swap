/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/15 16:18:21 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/15 17:14:39 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int 	move_b(t_folder **stack_a, t_folder **stack_b, t_num *ssl)
{
	int i;
	while (*stack_b)
	{
		i = 0;
		while((*stack_b)->data > (*stack_a)->data)
		{
			ra(stack_a);
			write(1, "ra\n", 3);
			i++;
		}
		pa(stack_a, stack_b, ssl);
		write(1, "pa\n", 3);
		while (i)
		{
			rra(stack_a);
			write(1, "rra\n", 4);
			i--;
		}
	}
	return (0);
}