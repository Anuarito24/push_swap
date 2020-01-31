/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_part.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 15:26:17 by avenonat          #+#    #+#             */
/*   Updated: 2020/01/29 21:58:59 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	first_part(t_folder **stack_a, t_folder **stack_b, t_num *ssl)
{
	while (ssl->count_b < ssl->half)
	{
		if ((*stack_a)->index < ssl->half)
		{
			pb(stack_a, stack_b, ssl, 1);
			if ((*stack_b)->index > ssl->fourth && ssl->count_b > 1)
				rb(stack_b, 1);
		}
		else
			ra(stack_a, 1);
	}
}
