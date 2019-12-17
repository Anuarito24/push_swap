/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 20:34:35 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/17 16:36:52 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

int		*sort_a(t_folder **stack_a, t_num *ssl)
{
	int			i;
	int			j;
	int			*good;
	t_folder	*position;

	i = 0;
	position = (*stack_a);
	if (!(good = (int*)malloc(sizeof(int) * (ssl->count_a))))
		return (0);
	while (i < ssl->count_a)
	{
		good[i] = position->data;
		position = position->next;
		i++;
	}
	i = 0;
	while (ssl->count_a - 1 > i)
	{
		j = i + 1;
		while (j < ssl->count_a)
		{
			if (good[i] > good[j])
				ft_swap(&good[i], &good[j]);
			j++;
		}
		i++;
	}
	return (good);
}
