/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_minor.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/16 21:28:34 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/17 16:36:52 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

int		search_minor(int *sum)
{
	int temp;
	int i;
	int j;

	temp = sum[9];
	j = 9;
	i = 1;
	while (i < 2)
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
