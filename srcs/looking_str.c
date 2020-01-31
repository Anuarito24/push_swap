/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   looking_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 16:18:14 by avenonat          #+#    #+#             */
/*   Updated: 2020/01/31 13:56:19 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	looking_str(char **new, t_folder **stack_a, t_num *ssl)
{
	if (check_str(new))
	{
		write(1, "Error\n", 6);
		exit(-1);
	}
	ssl->count_a += push_swap(new, stack_a);
	if (ssl->count_a < 0)
		exit(-1);
}
