/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   distance_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 13:27:55 by avenonat          #+#    #+#             */
/*   Updated: 2020/01/29 13:51:51 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

int		distance_2(t_folder **stack_b, t_num *ssl, int i)
{
	int			j;
	t_folder	*temp;

	j = 0;
	temp = (*stack_b);
	while (temp && temp->index != i)
	{
		temp = temp->next;
		j++;
	}
	if (j > ssl->count_b - j)
		j = ssl->count_b - j;
	return (j);
}
