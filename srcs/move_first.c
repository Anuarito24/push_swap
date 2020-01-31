/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_first.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 16:36:28 by avenonat          #+#    #+#             */
/*   Updated: 2020/01/29 16:53:31 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	move_first(t_folder **stack_a, t_folder **stack_b, t_num *ssl)
{
	while (ssl->count_b < ssl->fourth)
	{
		if ((*stack_a)->index < ssl->fourth)
		{
			pb(stack_a, stack_b, ssl, 1);
			if ((*stack_b)->index > ssl->octal && ssl->count_b > 1)
				rb(stack_b, 1);
		}
		else
			ra(stack_a, 1);
	}
}
