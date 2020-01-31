/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   major.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 18:46:10 by avenonat          #+#    #+#             */
/*   Updated: 2020/01/30 22:14:51 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

int		major(t_folder **stack_a, t_folder **stack_b, t_num *ssl)
{
	int		i;

	index_assignment(stack_a, ssl);
	i = if_sorted(stack_a);
	ssl->half = ssl->count_a / 2;
	ssl->fourth = ssl->half / 2;
	ssl->octal = ssl->fourth / 2;
	if (i && ssl->count_a < 6)
		until_five(stack_a, stack_b, ssl);
	else if (i && ssl->count_a < 21)
		until_twenty(stack_a, stack_b, ssl);
	else if (i && ssl->count_a < 102)
		until_hundred_one(stack_a, stack_b, ssl);
	else if (i)
		sort_it(stack_a, stack_b, ssl);
	return (0);
}
