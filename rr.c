/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 15:09:12 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/10 18:20:40 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int rr(t_folder **stack_a, t_folder **stack_b)
{
	if (stack_a && stack_b)
	{
		ra(stack_a);
		rb(stack_b);
		return (1);
	}
	return (0);
}