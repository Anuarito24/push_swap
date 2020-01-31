/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   until_five_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 21:26:01 by avenonat          #+#    #+#             */
/*   Updated: 2020/01/28 21:33:30 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	three_variables(t_folder **stack_a)
{
	int a;
	int b;
	int c;

	a = (*stack_a)->index;
	b = (*stack_a)->next->index;
	c = (*stack_a)->next->next->index;
	if (a > b && b < c && c > a)
		until_five_1_1(stack_a);
	if (a > b && b > c && c < a)
		until_five_1_2(stack_a);
	if (a > b && b < c && c < a)
		until_five_1_3(stack_a);
	if (a < b && b > c && c > a)
		until_five_1_4(stack_a);
	if (a < b && b > c && c < a)
		until_five_1_5(stack_a);
}
