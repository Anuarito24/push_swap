/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 15:11:02 by avenonat          #+#    #+#             */
/*   Updated: 2020/01/28 22:11:48 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	rrr(t_folder **stack_a, t_folder **stack_b, int i)
{
	if (stack_a && stack_b)
	{
		rra(stack_a, 0);
		rrb(stack_b, 0);
	}
	if (i)
		write(1, "rrr\n", 4);
}
