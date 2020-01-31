/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   if_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 17:50:51 by avenonat          #+#    #+#             */
/*   Updated: 2020/01/29 17:50:51 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

int		if_sorted(t_folder **stack_a)
{
	t_folder	*ggg;
	int			i;

	i = 0;
	ggg = (*stack_a);
	while (ggg && ggg->next)
	{
		if (ggg->next)
			if (ggg->data > ggg->next->data)
				i = 1;
		ggg = ggg->next;
	}
	return (i);
}
