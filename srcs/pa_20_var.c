/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_20_variables.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 13:31:30 by avenonat          #+#    #+#             */
/*   Updated: 2020/01/29 22:38:30 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	pa_20_var(t_folder **stack_a, t_folder **stack_b, t_num *ssl, int i)
{
	int dis;

	dis = distance(stack_b, i);
	if (dis < ssl->count_b - dis)
		while (dis--)
			rb(stack_b, 1);
	else
	{
		dis = ssl->count_b - dis;
		while (dis--)
			rrb(stack_b, 1);
	}
	pa(stack_a, stack_b, ssl, 1);
}
