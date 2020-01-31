/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 15:01:20 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/17 16:36:52 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	sa(t_folder **stack_a, int i)
{
	t_folder *c;

	if (*stack_a == NULL)
		return ;
	c = *stack_a;
	*stack_a = (*stack_a)->next;
	c->next = (*stack_a)->next;
	(*stack_a)->next = c;
	if (i)
		write(1, "sa\n", 3);
}
