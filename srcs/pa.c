/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 15:06:08 by avenonat          #+#    #+#             */
/*   Updated: 2020/01/29 13:42:32 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	pa(t_folder **stack_a, t_folder **stack_b, t_num *ssl, int i)
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
		if (i)
			write(1, "pa\n", 3);
	}
}
