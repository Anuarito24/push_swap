/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb_5_variables.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 12:29:43 by avenonat          #+#    #+#             */
/*   Updated: 2020/01/29 21:39:59 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	pb_5_variables(t_folder **stack_a, t_folder **stack_b, t_num *ssl,
		int i)
{
	int dis;

	dis = distance(stack_a, i);
	if (dis < ssl->count_a - dis)
		while (dis--)
			ra(stack_a, 1);
	else
	{
		dis = ssl->count_a - dis;
		while (dis--)
			rra(stack_a, 1);
	}
	pb(stack_a, stack_b, ssl, 1);
}
