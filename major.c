/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   major.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 18:46:10 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/12 22:34:44 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int 	major(t_folder **stack_a, t_folder **stack_b, t_num *ssl)
{
	int pos;
	int *good;
	int *sum;
	int j;
	t_folder *position;
	int sum1;

	sum1 = 0;
	good = (int*)malloc(sizeof(int) *(ssl->count_a + 1));
	pos = ssl->count_a;
	position = (*stack_a);
	while (pos)
	{
		good[pos] = position->data;
		position = position->next;
		pos--;
	}
	sort(good, ssl);
	sum1 = sum_position(stack_a, good, ssl->count_a) + sum_position(stack_b, good, ssl->count_b);
	while (sum1 != 0)
	{
		sum = your_choise(stack_a, stack_b, good, ssl);
		j = search_min(sum);
		sum1 = sum_position(stack_a, good, ssl->count_a) + sum_position(stack_b, good, ssl->count_b);
		if (j != 9)
			ask_function(stack_a, stack_b, j, ssl, good);
		else if (sum1 != 0)
			your_choise2(stack_a, stack_b, good, ssl);
		else
			break;
	}
	while (*stack_a)
	{
		printf("%d", (*stack_a)->data);
		(*stack_a) = (*stack_a)->next;
	}
	return (0);
}
























	/* пока число больше 3
	while (count > 3)
	{
		position = (*stack_a);
		if(position->data > position->next->data || position->data > position->next->next->data)
			ra(stack_a);
		else
		{
			pb(stack_a, stack_b);
			count--;
		}
	}
	// соритруем 3 оставшихся числа в стеке_а
	if ((*stack_a)->data > (*stack_a)->next->data)
	{
		if ((*stack_a)->next->data < (*stack_a)->next->next->data)
		{
			if ((*stack_a)->next->next->data > (*stack_a)->data)
				sa(stack_a);
			else
				ra(stack_a);
		}
		else
		{
			rra(stack_a);
			rra(stack_a);
		}
	}
	else
	{
		if ((*stack_a)->next->next->data < (*stack_a)->data)
			rra(stack_a);
		else
		{
			rra(stack_a);
			sa(stack_a);
		}
	}
	// перекидываем все что было в стеке б в стек а
	while (*stack_b)
	{
		if ((*stack_b) && (*stack_b)->next && (*stack_b)->next->next && ((*stack_b)->data > (*stack_b)->next->data && (*stack_b)->data > (*stack_b)->next->next->data))
			pa(stack_a, stack_b);
		else
			rb(stack_b);
	}*/
