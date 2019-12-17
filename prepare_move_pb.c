/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prepare_move_pb.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/15 20:52:47 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/17 12:48:33 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int    prepare_move_pb(t_folder **s_a, t_folder **s_b, t_num *ssl)
{
	int i;
	int j;
	t_folder *temp;
	i = 0;
	j = 0;
	temp = (*s_b);
	if (ssl->count_b > 1)
	{
		if (((*s_a)->data > (*s_b)->data) && ((*s_a)->data < (*s_b)->next->data))
			return (-1);
		while ((*s_a)->data > temp->data && temp->next != NULL)
		{
			temp = temp->next;
			i++;
		}
		j = i;
		if ((*s_a)->data < temp->data)
		{
//       j = ssl->count_b + 1 - i;
//       if ((ssl->count_b) / 2 > i)
			if (i < ssl->count_b - i)
			{
				while (i)
				{
					i--;
					rb(s_b);
					write(1, "rb\n", 3);
				}
			}
			else
			{
				i = ssl->count_b - i;
				while (i)
				{
					i--;
					rrb(s_b);
					write(1, "rrb\n", 4);
				}
			}
		}
	}
	return (j);
}
