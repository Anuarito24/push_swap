/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 14:26:28 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/18 14:34:24 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	free_stack(t_folder **stack_a, t_folder **stack_b)
{
	t_folder *buffer;

	while (*stack_a)
	{
		buffer = (*stack_a);
		buffer->data = 0;
		buffer->index = 0;
		(*stack_a) = (*stack_a)->next;
		free(buffer);
	}
	while (*stack_b)
	{
		buffer = (*stack_b);
		buffer->data = 0;
		buffer->index = 0;
		(*stack_b) = (*stack_b)->next;
		free(buffer);
	}
}
