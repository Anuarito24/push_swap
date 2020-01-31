/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   same_or_no.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 13:38:04 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/17 23:13:17 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

int		check_num(int a, t_folder **stack_a)
{
	t_folder *buffer;

	buffer = *stack_a;
	while (buffer != NULL)
	{
		if (buffer->data == a)
			return (1);
		buffer = buffer->next;
	}
	return (0);
}
