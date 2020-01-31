/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 17:41:42 by avenonat          #+#    #+#             */
/*   Updated: 2020/01/29 17:41:42 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

int		*sort(int *good, t_num *ssl)
{
	int i;
	int j;

	i = 0;
	while (i < ssl->count_a - 1)
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
