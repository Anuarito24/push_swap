/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 15:06:42 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/10 19:24:05 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int		pb(t_folder **stack_a, t_folder **stack_b)
{
	t_folder *buffer;

	if ((*stack_a))
	{
		buffer = (*stack_a);
		(*stack_a) = (*stack_a)->next;
		buffer->next = NULL;
		if ((*stack_b) == NULL)
			(*stack_b) = buffer;
		else
		{
			buffer->next = (*stack_b);
			(*stack_b) = buffer;
		}
		return (1);
	}
	return (0);
}