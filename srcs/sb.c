/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 15:04:20 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/17 16:36:52 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void		sb(t_folder **stack_b, int i)
{
	t_folder *c;

	if (*stack_b == NULL)
		return ;
	c = *stack_b;
	*stack_b = (*stack_b)->next;
	c->next = (*stack_b)->next;
	(*stack_b)->next = c;
	if (i)
		write(1, "sb\n", 3);
}
