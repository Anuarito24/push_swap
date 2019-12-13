/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 17:40:45 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/12 18:37:21 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int 	*sort(int *good, t_num *ssl)
{
	int i;
	int j;

	i = 0;
	while (ssl->count_a - 1 > i)
	{
		j = 1;
		while (j < ssl->count_a)
		{
			if (good[i] > good[j])
				ft_swap(&good[i], &good[j]);
			j++;
		}
		i++;
	}
	return (0);
}
