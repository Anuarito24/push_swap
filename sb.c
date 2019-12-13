/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 15:04:20 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/08 13:56:30 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int sb(t_folder **stack_b)
{
	t_folder *d;
	d = *stack_b;
	if (d && d->next)
	{
		ft_swap(&d->data, &d->next->data);
		return (1);
	}
	return (0);
}