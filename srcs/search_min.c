/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_min.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 18:23:51 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/17 16:36:52 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

int		search_min(int *sum)
{
	int		temp;
	int		i;
	int		j;

	j = 9;
	i = 1;
	temp = sum[9];
	while (i < 10)
	{
		if (sum[i] < temp)
		{
			temp = sum[i];
			j = i;
		}
		i++;
	}
	return (j);
}
