/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 15:09:12 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/17 16:36:52 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	rr(t_folder **stack_a, t_folder **stack_b, int i)
{
	if (stack_a && stack_b)
	{
		ra(stack_a, 0);
		rb(stack_b, 0);
	}
	if (i)
		write(1, "rr\n", 3);
}
