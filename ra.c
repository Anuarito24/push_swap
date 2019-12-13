/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 15:07:45 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/10 19:24:05 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int		ra(t_folder **stack_a)
{
	t_folder *temp;
	t_folder *buffer;

	temp = (*stack_a);
	buffer = (*stack_a);
	(*stack_a) = (*stack_a)->next;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = buffer;
	buffer->next = NULL;
	return (0);
}