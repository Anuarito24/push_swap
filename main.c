/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 14:51:36 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/17 13:12:39 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int		main()
{
	int argc = 2;
	char *argv = "498 900 504 239 208 233 806 924 336 753 394 678 225 119 393 549 603 703 868 962 602 795 944 596 858 469 507 909 194 702 651 399 154 472 195 509 302 646 988 574 556 800 622 316 844 177 343 508 479 899 886 379 873 226 429 459 268 205 138 904 142 960 834 682 283 687 352 125 734 256 165 232 462 589 277 790 303 517 813 374 715 446 590 684 354 487 328 993 825 163 669 706 901 728 447 145 997 172 363 696";
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