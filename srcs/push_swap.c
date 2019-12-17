/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 15:50:43 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/17 23:16:14 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

int		push_swap(char **new, t_folder **stack_a)
{
	int			i;
	t_folder	*buffer;
	t_folder	*head;

	i = 0;
	*head = NULL;
	while (new[i] != '\0')
	{
		if (!(head = malloc(sizeof(t_folder))))
			return (0);
		if (ft_atoi(new[i]))
		{
			head->data = ft_atoi(new[i]);
			if (check_num(head->data, stack_a))
			{
				write(1, "Error\n", 6);
				return (-1);
			}
			head->next = NULL;
		}
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
