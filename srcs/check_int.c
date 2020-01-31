/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 17:15:00 by avenonat          #+#    #+#             */
/*   Updated: 2020/01/31 16:37:53 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	check_int(char *new, t_folder *head, t_folder **stack_a)
{
	head->data = ft_atoi(new);
	if (check_num(head->data, stack_a))
	{
		write(1, "Error\n", 6);
		exit(-1);
	}
	head->next = NULL;
}
