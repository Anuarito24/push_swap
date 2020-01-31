/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_back.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 15:32:57 by avenonat          #+#    #+#             */
/*   Updated: 2020/01/29 15:36:40 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	move_back(t_folder **stack_a, t_folder **stack_b, t_num *ssl, int low)
{
	int high;
	int dis_low;
	int dis_high;

	high = low + ssl->count_b - 1;
	while (*stack_b)
	{
		dis_low = distance_2(stack_b, ssl, low);
		dis_high = distance_2(stack_b, ssl, low);
		if (dis_low < dis_high)
		{
			pa_20_var(stack_a, stack_b, ssl, low);
			if (ssl->count_a > 1 && (*stack_a)->next->index -
			(*stack_a)->index != 1)
				ra(stack_a, 1);
			low++;
		}
		else
		{
			pa_20_var(stack_a, stack_b, ssl, high);
			high--;
		}
	}
}
