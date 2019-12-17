/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sum_position_checker.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 19:56:47 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/17 22:03:07 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

int		sum_position_checker(t_folder **stack_a, int *good, int count)
{
	int			sum;
	int			i;
	int			j;
	t_folder	*temp;

	sum = 0;
	i = 0;
	while (i <= count - 1)
	{
		j = 0;
		temp = (*stack_a);
		while (temp && good[i] && good[i] != temp->data)
		{
			temp = temp->next;
			j++;
		}
		sum += ft_abs(i - j);
		i++;
	}
	return (sum);
}
