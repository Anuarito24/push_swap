/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_down.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 16:56:40 by avenonat          #+#    #+#             */
/*   Updated: 2020/01/29 22:28:30 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	put_down(t_folder **stack_a, int i)
{
	while ((*stack_a)->index != i - 1)
		ra(stack_a, 1);
	ra(stack_a, 1);
}
