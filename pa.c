/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 15:06:08 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/10 19:00:36 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int		pa(t_folder **stack_a, t_folder **stack_b)
{
	t_folder *buffer;

	if ((*stack_b))
	{
		buffer = (*stack_b);
		(*stack_b) = (*stack_b)->next;
		buffer->next = NULL;
		if ((*stack_a) == NULL)
			(*stack_a) = buffer;
		else
		{
			buffer->next = (*stack_a);
			(*stack_a) = buffer;
		}
		return (1);
	}
	return (0);
}