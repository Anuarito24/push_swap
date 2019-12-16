/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 15:07:45 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/10 19:24:05 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int    ra(t_folder **st)
{
	t_folder *temp;
	temp = *st;
	if (*st == NULL)
		return (0);
	while ((*st)->next != NULL)
		*st = (*st)->next;
	(*st)->next = temp;
	temp = temp->next;
	*st = (*st)->next;
	(*st)->next = NULL;
	*st = temp;
	return (1);
}