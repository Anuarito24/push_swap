/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sum_position.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 17:52:55 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/12 21:52:00 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int 	sum_position(t_folder **stack_a, int *good, int count)
{
	int sum;
	int i;
	int j;
	t_folder *temp;

	temp = (*stack_a);
	sum = 0;
	i = 0;
	while (i < count - 1)
	{
		j = 0;
		while (good[i] != temp->data && temp && good[i])
		{
			temp->next;
			j++;
		}
		sum += ft_abs(i - j);
		i++;

	}
	return (sum);
}