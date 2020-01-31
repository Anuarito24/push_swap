/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_it.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 15:45:52 by avenonat          #+#    #+#             */
/*   Updated: 2020/01/29 22:30:18 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	sort_it(t_folder **stack_a, t_folder **stack_b, t_num *ssl)
{
	move_first(stack_a, stack_b, ssl);
	move_back(stack_a, stack_b, ssl, 0);
	put_down(stack_a, ssl->fourth);
	move_second(stack_a, stack_b, ssl);
	put_down(stack_a, ssl->fourth);
	move_back(stack_a, stack_b, ssl, ssl->fourth);
	while ((*stack_a)->index != ssl->half - 1)
		ra(stack_a, 1);
	ra(stack_a, 1);
	move_third(stack_a, stack_b, ssl);
	while ((*stack_a)->index != ssl->half - 1)
		ra(stack_a, 1);
	ra(stack_a, 1);
	move_back(stack_a, stack_b, ssl, ssl->half);
	while ((*stack_a)->index != ssl->fourth * 3 - 1)
		ra(stack_a, 1);
	ra(stack_a, 1);
	move_fourth(stack_a, stack_b, ssl);
	move_back(stack_a, stack_b, ssl, ssl->fourth * 3);
	while ((*stack_a)->index != 0)
		ra(stack_a, 1);
}
