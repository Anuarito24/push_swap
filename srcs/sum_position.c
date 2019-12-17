/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sum_position.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 17:52:55 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/17 16:36:52 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

int		sum_position(t_folder **stack_a, int *good, int count)
{
	int			sum;
	int			i;
	int			j;
	t_folder	*temp;

	sum = 0;
	j = 0;
	temp = (*stack_a);
	while (temp)
	{
		i = 0;
		while (i <= count - 1 && good[i] != temp->data)
			i++;
		sum += ft_abs(i - j);
		j++;
		temp = temp->next;
	}
	return (sum);
}
