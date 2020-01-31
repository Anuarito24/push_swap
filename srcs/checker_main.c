/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 13:57:45 by avenonat          #+#    #+#             */
/*   Updated: 2020/01/31 14:02:08 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

int		main(int argc, char **argv)
{
	char		*line;
	t_folder	*st_a;
	t_folder	*st_b;
	t_num		ssl;

	st_a = NULL;
	st_b = NULL;
	if (argc != 1)
		st_a = read_number(argv, &ssl);
	else
		exit(-1);
	while (get_next_line(0, &line) == 1)
	{
		if (compare_command(&st_a, &st_b, line, &ssl))
			error();
		if (line)
		{
			free(line);
			line = NULL;
		}
	}
	check_order(&st_a, &ssl);
	free_stack(&st_a, &st_b);
	return (0);
}
