/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 15:46:43 by avenonat          #+#    #+#             */
/*   Updated: 2020/01/30 14:55:27 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

int		check_str(char **str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i][j] != '\0')
		{
			if (str[i][j] >= 48 && str[i][j] <= 57)
				j++;
			else if ((str[i][j] == '-' || str[i][j] == '+') &&
			str[i][j + 1] != '\0'
			&& str[i][j + 1] >= 48 && str[i][j + 1] <= 57)
				j++;
			else
				return (1);
		}
		if (plus_check(str[i]))
			return (1);
		j = 0;
		i++;
	}
	return (0);
}
