/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 15:06:08 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/17 16:36:52 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

int		pa(t_folder **stack_a, t_folder **stack_b, t_num *ssl)
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
		ssl->count_a++;
		ssl->count_b--;
		return (1);
	}
	return (0);
}
