/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   after_pb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/16 16:59:25 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/17 16:38:40 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	after_pb(t_folder **s_b, t_num *ssl, int j)
{
	if (j == -1)
	{
		sb(s_b);
		write(1, "sb\n", 3);
	}
	else if (j == -2)
	{
		rb(s_b);
		write(1, "rb\n", 3);
	}
	else if (j < ssl->count_b - j)
	{
		while (j)
		{
			j--;
			rrb(s_b);
			write(1, "rrb\n", 4);
		}
	}
	else
	{
		j = ssl->count_b - j;
		while (j)
		{
			j--;
			rb(s_b);
			write(1, "rb\n", 3);
		}
	}
}
