/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 15:01:20 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/08 13:45:37 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int		sa(t_folder **stack_a)
{
	t_folder *c;
	c = *stack_a;
	if (c && c->next)
	{
		ft_swap(&c->data, &c->next->data);
		return (1);
	}
	return (0);
}