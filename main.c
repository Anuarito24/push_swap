/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 14:51:36 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/16 19:11:14 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int		main()
{
	int argc = 2;
	char *argv = "310 517 560 177 234 516 837 765 644 943 216 548 396 152 397 757 449 188 207 542 499 651 752 454 261 591 308 388 555 552 253 100 392 696 876 311 697 702 589 245 347 104 758 459 368 295 701 241 878 119 453 629 834 574 264 476 883 419 326 646 401 888 618 333 937 262 693 922 339 749 107 639 547 324 154 465 483 987 767 973 949 170 807 293 143 435 824 502 964 553 716 612 544 756 309 549 463 210 464 627";
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
	return (0);
}