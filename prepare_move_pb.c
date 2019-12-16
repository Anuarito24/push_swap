/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prepare_move_pb.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/15 20:52:47 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/15 22:34:20 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	prepare_move_pb(t_folder **stack_a, t_folder **stack_b)
{
	int i;
	while (*stack_b)
	{
		i = 0;
		while((*stack_b)->data < (*stack_a)->data)
		{
			rb(stack_b);
			write(1, "rb\n", 3);
			i++;
		}
	}
}