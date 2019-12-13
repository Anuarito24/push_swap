/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   your_choise.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 18:03:30 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/13 20:43:21 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int		*your_choise(t_folder **stack_a, t_folder **stack_b, t_num *ssl)
{
	int *sum;

	if (!(sum = (int*)malloc(sizeof(int) * 10)))
		return (0);
	sa(stack_a);
	sum[0] = sum_position(stack_a, sort_a(stack_a, ssl), ssl->count_a) + sum_position(stack_b, sort_b(stack_b, ssl), ssl->count_b);
	sa(stack_a);

	ra(stack_a);
	sum[1] = sum_position(stack_a, sort_a(stack_a, ssl), ssl->count_a) + sum_position(stack_b, sort_b(stack_b, ssl), ssl->count_b);
	rra(stack_a);

	rra(stack_a);
	sum[2] = sum_position(stack_a, sort_a(stack_a, ssl), ssl->count_a) + sum_position(stack_b, sort_b(stack_b, ssl), ssl->count_b);
	ra(stack_a);

	sb(stack_b);
	sum[3] = sum_position(stack_a, sort_a(stack_a, ssl), ssl->count_a) + sum_position(stack_b, sort_b(stack_b, ssl), ssl->count_b);
	sb(stack_b);

	ss(stack_a, stack_b);
	sum[4] = sum_position(stack_a, sort_a(stack_a, ssl), ssl->count_a) + sum_position(stack_b, sort_b(stack_b, ssl), ssl->count_b);
	ss(stack_a, stack_b);

	rb(stack_b);
	sum[5] = sum_position(stack_a, sort_a(stack_a, ssl), ssl->count_a) + sum_position(stack_b, sort_b(stack_b, ssl), ssl->count_b);
	rrb(stack_b);

	rr(stack_a, stack_b);
	sum[6] = sum_position(stack_a, sort_a(stack_a, ssl), ssl->count_a) + sum_position(stack_b, sort_b(stack_b, ssl), ssl->count_b);
	rrr(stack_a, stack_b);

	rrb(stack_b);
	sum[7] = sum_position(stack_a, sort_a(stack_a, ssl), ssl->count_a) + sum_position(stack_b, sort_b(stack_b, ssl), ssl->count_b);
	rb(stack_b);

	rrr(stack_a, stack_b);
	sum[8] = sum_position(stack_a, sort_a(stack_a, ssl), ssl->count_a) + sum_position(stack_b, sort_b(stack_b, ssl), ssl->count_b);
	rr(stack_a, stack_b);

	sum[9] = sum_position(stack_a, sort_a(stack_a, ssl), ssl->count_a) + sum_position(stack_b, sort_b(stack_b, ssl), ssl->count_b);
	return (sum);
}