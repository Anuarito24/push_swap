/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 14:51:36 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/16 11:16:35 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int		main()
{
	int argc = 2;
	char *argv = "442 552 212 290 476 892 725 385 269 441 169 897 616 932 200 429 548 226 558 280 979 448 747 718 640 941 253 460 571 734 350 332 386 166 668 123 596 393 971 839 323 678 375 518 463 949 436 884 491 675 545 163 210 324 591 827 887 676 925 954 934 950 791 329 713 731 704 135 343 811 644 433 917 578 623 256 145 938 547 114 106 904 968 203 105 197 721 911 592 794 858 996 243 865 235 508 255 846 694";
	int i;
	char **new;
	t_folder *stack_a;
	t_folder *stack_b;
	//int count;
	t_num ssl;

	ssl.count_a = 0;
	ssl.count_b = 0;
	//count = 0;
	stack_b = NULL;
	stack_a = NULL;
	i = 1;
	if (argc == 1)
		return (0);
	else if (argc >= 2)
	{
		while (argc > i)
		{
			new = ft_strsplit(argv, ' ');
			if (check_str(new))
			{
				write(1, "Error\n", 6);
				return (0);
			}
			ssl.count_a += push_swap(new, &stack_a);
			if (ssl.count_a < 0)
				return (-1);
			i++;
		}
		major(&stack_a, &stack_b, &ssl);
		free(new);
	}
//	while (stack_a)
//	{
//		printf("%d ", stack_a->data);
//		stack_a = stack_a->next;
//	}
	return (0);
}