/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 15:50:43 by avenonat          #+#    #+#             */
/*   Updated: 2020/01/31 16:37:53 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

int		push_swap(char **new, t_folder **stack_a)
{
	int			i;
	t_folder	*buffer;
	t_folder	*head;

	i = 0;
	while (new[i] != '\0')
	{
		if (!(head = malloc(sizeof(t_folder))))
			return (0);
		if (ft_atoi(new[i]) <= 2147483647 && ft_atoi(new[i]) >= -2147483648)
			check_int(new[i], head, stack_a);
		else
			return (0);
		if (*stack_a != NULL)
		{
			buffer = skip_box(stack_a);
			buffer->next = head;
		}
		else
			*stack_a = head;
		i++;
	}
	return (i);
}
