/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ask_function.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 19:37:18 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/15 22:09:42 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void 	ask_function(t_folder **stack_a, t_folder **stack_b, int j, t_num *ssl, int *good)
{
	if (j == 9)
		your_choise2(stack_a, stack_b, good, ssl);
	else if (j == 0)
	{
		sa(stack_a);
		write(1, "sa\n", 3);
	}
	else if (j == 1)
	{
		ra(stack_a);
		write(1, "ra\n", 3);
	}
	else if (j == 2)
	{
		rra(stack_a);
		write(1, "rra\n", 4);
	}
	else if (j == 3)
	{
		sb(stack_b);
		write(1, "sb\n", 3);
	}
	else if (j == 4)
	{
		ss(stack_a, stack_b);
		write(1, "ss\n", 3);
	}
	else if (j == 5)
	{
		rb(stack_b);
		write(1, "rb\n", 3);
	}
	else if (j == 6)
	{
		rr(stack_a, stack_b);
		write(1, "rr\n", 3);
	}
	else if (j == 7)
	{
		rrb(stack_b);
		write(1, "rrb\n", 4);
	}
	else if (j == 8)
	{
		rrr(stack_a, stack_b);
		write(1, "rrr\n", 4);
	}
}