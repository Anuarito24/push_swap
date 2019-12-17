/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 20:39:05 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/17 16:36:52 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

int 	*sort_b(t_folder **stack_b, t_num *ssl)
{
	int i;
	int j;
	int *good;
	t_folder *position;

	i = 0;
	position = (*stack_b);
	if (!(good = (int*)malloc(sizeof(int) * (ssl->count_b))))
		return (0);
	while (i < ssl->count_b)
	{
		good[i] = position->data;
		position = position->next;
		//printf("%d", good[i]);
		i++;
	}
	i = 0;
	while (ssl->count_b - 1 > i)
	{
		j = i + 1;
		while (j < ssl->count_b)
		{
			if (good[i] > good[j])
				ft_swap(&good[i], &good[j]);
			j++;
		}
		i++;
	}
	return (good);
}