/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 15:08:24 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/13 15:38:21 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int    rb(t_folder **st)
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