/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   until_five.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 21:16:01 by avenonat          #+#    #+#             */
/*   Updated: 2020/01/30 22:16:40 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	until_five(t_folder **stack_a, t_folder **stack_b, t_num *ssl)
{
	if (ssl->count_a == 2)
		if ((*stack_a)->index > (*stack_a)->next->index)
			sa(stack_a, 1);
	if (ssl->count_a == 3)
		three_variables(stack_a);
	if (ssl->count_a > 3)
		over_three_variables(stack_a, stack_b, ssl);
}
