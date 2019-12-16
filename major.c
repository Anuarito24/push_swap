/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   major.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 18:46:10 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/15 22:34:20 by avenonat         ###   ########.fr       */
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
	while (sum1 != 0  || (sum1 == 0 && (*stack_b) != NULL))
	{
		sum = your_choise(stack_a, stack_b, ssl);
		j = search_min(sum);
		if (sum1 == 0 && (*stack_b) != NULL)
		{
			//move_b(stack_a, stack_b, ssl);
			pa(stack_a, stack_b, ssl);
			write(1, "pa\n", 3);
		}
		else if ((*stack_a) && sum[j] >= sum[9])
		{
			pb(stack_a, stack_b, ssl);
			write(1, "pb\n", 3);
		}
		else if ((*stack_a) && sum[j] != sum[9])
			ask_function(stack_a, stack_b, j, ssl, good);
		sum1 = sum_position_checker(stack_a, sort_a(stack_a, ssl), ssl->count_a) + sum_position_checker(stack_b, sort_b(stack_b, ssl), ssl->count_b);
		if (ssl->count_b == 0)
			(*stack_b) = NULL;
		if (sum_position_checker(stack_a, sort_a(stack_a, ssl), ssl->count_a) == 0 && stack_b != NULL)
			move_b(stack_a, stack_b, ssl);
//		if (j != 9)
//			ask_function(stack_a, stack_b, j, ssl, good);
//		if (sum1 != 0)
//			your_choise2(stack_a, stack_b, good, ssl);
//		else
//			break;
	}
//	if (stack_b)
//		pa(stack_a, stack_b, ssl);
//	while (*stack_a)
//	{
//		printf("%d\n", (*stack_a)->data);
//		(*stack_a) = (*stack_a)->next;
//	}
	return (0);
}
