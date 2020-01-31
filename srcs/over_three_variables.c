/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   until_five_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 21:37:02 by avenonat          #+#    #+#             */
/*   Updated: 2020/01/29 12:23:41 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	over_three_variables(t_folder **stack_a, t_folder **stack_b, t_num *ssl)
{
	pb_5_variables(stack_a, stack_b, ssl, 0);
	if (ssl->count_a == 4)
		pb_5_variables(stack_a, stack_b, ssl, 1);
	three_variables(stack_a);
	while (ssl->count_b)
		pa(stack_a, stack_b, ssl, 1);
}
