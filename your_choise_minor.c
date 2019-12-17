/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   your_choise_minor.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/16 21:20:39 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/16 21:20:39 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int		*your_choise_minor(t_folder **stack_a, t_folder **stack_b, t_num *ssl)
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

	sum[9] = sum_position(stack_a, sort_a(stack_a, ssl), ssl->count_a) + sum_position(stack_b, sort_b(stack_b, ssl), ssl->count_b);
	return (sum);
}