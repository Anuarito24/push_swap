/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   until_hundred_one.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 14:40:04 by avenonat          #+#    #+#             */
/*   Updated: 2020/01/29 21:56:20 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	until_hundred_one(t_folder **stack_a, t_folder **stack_b, t_num *ssl)
{
	first_part(stack_a, stack_b, ssl);
	move_back(stack_a, stack_b, ssl, 0);
	while ((*stack_a)->index != ssl->half - 1)
		ra(stack_a, 1);
	ra(stack_a, 1);
	second_part(stack_a, stack_b, ssl);
	move_back(stack_a, stack_b, ssl, ssl->half);
	while ((*stack_a)->index != 0)
		ra(stack_a, 1);
}
