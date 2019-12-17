/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/15 16:18:21 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/17 16:38:40 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

int    move_b(t_folder **s_a, t_folder **s_b, t_num *ssl)
{
	int i;
	while (*s_b)
	{
		i = 0;
		while((*s_b) && (*s_b)->data > (*s_a)->data)
		{
			ra(s_a);
			write(1, "ra\n", 3);
			i++;
		}
		pa(s_a, s_b, ssl);
		write(1, "pa\n", 3);
		i++;
	}
	ra(s_a);
	write (1, "ra\n", 3);
	while ((*s_a)->data < (*s_a)->next->data)
	{
		ra(s_a);
		write (1, "ra\n", 3);
	}
	ra(s_a);
	write (1, "ra\n", 3);
	return (0);
}