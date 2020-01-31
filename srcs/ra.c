/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 15:07:45 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/17 16:36:52 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	ra(t_folder **st, int i)
{
	t_folder	*temp;

	temp = *st;
	if (*st == NULL)
		return ;
	while ((*st)->next != NULL)
		*st = (*st)->next;
	(*st)->next = temp;
	temp = temp->next;
	*st = (*st)->next;
	(*st)->next = NULL;
	*st = temp;
	if (i)
		write(1, "ra\n", 3);
}
