/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sum_position.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 17:52:55 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/13 22:23:00 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int     sum_position(t_folder **stack_a, int *good, int count)
{
	int sum;
	int i;
	int j;
	t_folder *temp;
	temp = (*stack_a);
	sum = 0;
// i = 0;
	j = 0;
	while (temp)
	{
		i = 0;
		while (i <= count - 1 && good[i] != temp->data)
			i++;
		sum += ft_abs(i - j);
		j++;
		temp = temp->next;
	}
//    printf("%d\n", sum);
	return (sum);
}