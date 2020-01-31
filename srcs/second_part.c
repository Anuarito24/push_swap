/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   second_part.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 15:31:04 by avenonat          #+#    #+#             */
/*   Updated: 2020/01/29 21:59:59 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	second_part(t_folder **stack_a, t_folder **stack_b, t_num *ssl)
{
	while ((*stack_a)->index != 0)
	{
		pb(stack_a, stack_b, ssl, 1);
		if ((*stack_b)->index > ssl->fourth * 3 && ssl->count_b > 1)
			rb(stack_b, 1);
	}
}
