/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_assignment.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 19:12:06 by avenonat          #+#    #+#             */
/*   Updated: 2020/01/29 17:41:21 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	index_assignment(t_folder **stack_a, t_num *ssl)
{
	int			pos;
	int			good[ssl->count_a];
	t_folder	*position;

	pos = 0;
	position = (*stack_a);
	good[ssl->count_a] = '\0';
	while (pos < ssl->count_a)
	{
		good[pos] = position->data;
		position = position->next;
		pos++;
	}
	sort(good, ssl);
	pos = 0;
	while (pos < ssl->count_a)
	{
		position = (*stack_a);
		while (good[pos] != position->data)
			position = position->next;
		position->index = pos;
		pos++;
	}
}
