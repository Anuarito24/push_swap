/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_min.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 18:23:51 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/12 19:16:09 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int 	search_min(int *sum)
{
	int temp;
	int i;
	int j;

	temp = sum[9];
	i = 1;
	while(i < 10)
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