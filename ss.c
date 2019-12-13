/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 15:04:52 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/05 15:04:57 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int ss(t_folder **stack_a, t_folder **stack_b)
{
	t_folder *c;
	t_folder *d;

	c = *stack_a;
	d = *stack_b;
	if (c && c->next)
		ft_swap(&c->data, &c->next->data);
	if (d && d->next)
		ft_swap(&d->data, &d->next->data);
	return (0);
}