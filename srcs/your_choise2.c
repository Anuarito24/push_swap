/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   your_choise2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 19:42:08 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/17 16:36:52 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

int		your_choise2(t_folder **stack_a, t_folder **stack_b, t_num *ssl)
{
	int jack;

	if (sum_position_checker(stack_a, sort_a(stack_a, ssl), ssl->count_a) != 0 && sum_position_checker(stack_b, sort_b(stack_b, ssl), ssl->count_b) == 0)
	{
		jack = prepare_move_pb(stack_a, stack_b, ssl);
		pb(stack_a, stack_b, ssl);
		after_pb(stack_b, ssl, jack);
		write(1, "pb\n", 3);
	}
	return (1);
}