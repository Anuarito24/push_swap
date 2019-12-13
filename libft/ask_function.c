/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ask_function.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 19:37:18 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/12 21:47:02 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void 	ask_function(t_folder **stack_a, t_folder **stack_b, int j, t_num *ssl, int *good)
{
	if (j == 9)
		your_choise2(stack_a, stack_b, good, ssl);
	else if (j == 0)
		sa(stack_a);
	else if (j == 1)
		sb(stack_b);
	else if (j == 2)
		ss(stack_a, stack_b);
	else if (j == 3)
		ra(stack_a);
	else if (j == 4)
		rb(stack_b);
	else if (j == 5)
		rr(stack_a, stack_b);
	else if (j == 6)
		rra(stack_a);
	else if (j == 7)
		rrb(stack_b);
	else if (j == 8)
		rrr(stack_a, stack_b);
}