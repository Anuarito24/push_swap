/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 15:09:52 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/17 22:54:31 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

int		rra(t_folder **st)
{
	t_folder *front;
	t_folder *back;
	t_folder *begin;

	begin = *st;
	front = *st;
	back = *st;
	if (*st == NULL)
		return (0);
	while (front->next != NULL)
	{
		front = front->next;
		if (front->next != NULL)
			back = back->next;
	}
	front->next = begin;
	back->next = NULL;
	*st = front;
	return (1);
}
