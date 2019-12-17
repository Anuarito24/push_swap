/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 15:50:43 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/17 16:36:52 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

int		push_swap(char **new, t_folder **stack_a)
{
	int i;
	t_folder *buffer;

	i = 0;
	while (new[i] != '\0')
	{
		t_folder *head = NULL;
		if	(!(head = malloc(sizeof(t_folder))))
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
		//printf("%d\n", head->data);
		i++;
	}
	return (i);
}