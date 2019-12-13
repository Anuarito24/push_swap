/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 15:09:52 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/10 18:22:04 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int		rra(t_folder **stack_a)
{
	t_folder *temp;
	t_folder *buffer;

	temp = (*stack_a);
	while (temp->next->next != NULL)
		temp = temp->next;
	buffer = temp->next;
	temp->next = NULL;
	buffer->next = (*stack_a);
	(*stack_a) = buffer;
	return (0);
}