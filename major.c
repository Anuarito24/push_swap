/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   major.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 18:46:10 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/17 15:22:06 by avenonat         ###   ########.fr       */
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

	pos = 0;
	if (!(good = (int*)malloc(sizeof(int) * (ssl->count_a))))
		return (0);
	position = (*stack_a);
	while (pos < ssl->count_a)
	{
		good[pos] = position->data;
		position = position->next;
		pos++;
	}
	// сортирует как должно быть в итоге
	sort(good, ssl);
	//показывает как обстоят дела сейчас
	sum1 = sum_position(stack_a, good, ssl->count_a) + sum_position(stack_b, good, ssl->count_b);
	while (sum1 != 0  || (*stack_b) != NULL)
	{
//		if (ssl->count_a > 3 || ssl->count_b > 3)
//		{
			sum = your_choise(stack_a, stack_b, ssl);
			j = search_min(sum);
//		}
//		else
//		{
//			sum = your_choise_minor(stack_a, stack_b, ssl);
//			j = search_minor(sum);
//		}
		if (sum1 == 0 && (*stack_b) != NULL)
			while ((*stack_b) != NULL)
				move_b(stack_a, stack_b, ssl);
		else if (*stack_a)
			ask_function(stack_a, stack_b, j, ssl);
		sum1 = sum_position_checker(stack_a, sort_a(stack_a, ssl), ssl->count_a) + sum_position_checker(stack_b, sort_b(stack_b, ssl), ssl->count_b);
		if (ssl->count_b == 0)
			(*stack_b) = NULL;
	}
	while (*stack_a)
	{
		printf("%d\n", (*stack_a)->data);
		(*stack_a) = (*stack_a)->next;
	}
	return (0);
}
