/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 15:06:42 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/17 16:36:52 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

int		pb(t_folder **stack_a, t_folder **stack_b, t_num *ssl)
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
		ssl->count_a--;
		ssl->count_b++;
		return (1);
	}
	return (0);
}