/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_second.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 16:41:30 by avenonat          #+#    #+#             */
/*   Updated: 2020/01/29 22:20:21 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	move_second(t_folder **stack_a, t_folder **stack_b, t_num *ssl)
{
	while ((*stack_a)->index != 0)
	{
		if (ssl->fourth <= (*stack_a)->index && ((*stack_a)->index <
		ssl->half))
		{
			pb(stack_a, stack_b, ssl, 1);
			if ((*stack_b)->index > ssl->octal * 3 && ssl->count_b > 1)
				rb(stack_b, 1);
		}
		else
			ra(stack_a, 1);
	}
}
