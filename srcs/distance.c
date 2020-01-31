/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   distance.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 12:33:56 by avenonat          #+#    #+#             */
/*   Updated: 2020/01/30 21:15:44 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

int		distance(t_folder **stack_a, int i)
{
	int			j;
	t_folder	*temp;

	j = 0;
	temp = (*stack_a);
	while (temp && temp->index != i)
	{
		j++;
		temp = temp->next;
	}
	return (j);
}
