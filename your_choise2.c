/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   your_choise2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 19:42:08 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/12 22:33:56 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int		your_choise2(t_folder **stack_a, t_folder **stack_b, int *good, t_num *ssl)
{
	int *sum;
	int j;

	j = 0;
	if (!(sum = (int*)malloc(sizeof(int) * 2)))
		return (0);
	if (*stack_a)
	{
		pa(stack_a, stack_b, ssl);
		sum[0] = sum_position(stack_a, good, ssl->count_a) + sum_position(stack_b, good, ssl->count_b);
		pb(stack_a, stack_b, ssl);
		ssl->count_a++;
		ssl->count_b--;
	}
	if (*stack_b)
	{
		pb(stack_a, stack_b, ssl);
		sum[1] = sum_position(stack_a, good, ssl->count_a) + sum_position(stack_b, good, ssl->count_b);
		pa(stack_a, stack_b, ssl);
		ssl->count_a--;
		ssl->count_b++;
	}
	if ((*stack_a) && (sum[0] < sum[1] || !(*stack_b)))
	{
		j = pa(stack_a, stack_b, ssl);
		write(1, "pa\n", 3);
	}
	else
	{
		j = pb(stack_a, stack_b, ssl);
		write(1, "pb\n", 3);
	}
	return (j);
}