/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 13:40:31 by avenonat          #+#    #+#             */
/*   Updated: 2020/01/29 13:40:31 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void		rra(t_folder **st, int i)
{
	t_folder *front;
	t_folder *back;
	t_folder *begin;

	begin = *st;
	front = *st;
	back = *st;
	if (*st == NULL)
		return ;
	while (front->next != NULL)
	{
		front = front->next;
		if (front->next != NULL)
			back = back->next;
	}
	if (front->next == NULL)
	{
		front->next = begin;
		back->next = NULL;
	}
	*st = front;
	if (i)
		write(1, "rra\n", 4);
}
