/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   until_twenty.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 12:44:55 by avenonat          #+#    #+#             */
/*   Updated: 2020/01/29 13:15:49 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	until_twenty(t_folder **stack_a, t_folder **stack_b, t_num *ssl)
{
	int i;

	i = ssl->count_a;
	while (i--)
		pb(stack_a, stack_b, ssl, 1);
	making_dec(stack_a, stack_b, ssl, 0);
}
