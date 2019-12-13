/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 15:08:24 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/09 16:51:33 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int		rb(t_folder **stack_b)
{
	t_folder *temp;
	t_folder *buffer;

	temp = (*stack_b);
	buffer = (*stack_b);
	(*stack_b) = (*stack_b)->next;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = buffer;
	buffer->next = NULL;
	return (0);
}