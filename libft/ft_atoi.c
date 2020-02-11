/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/15 13:53:47 by avenonat          #+#    #+#             */
/*   Updated: 2020/01/31 16:58:28 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

__int128_t		ft_atoi(const char *str)
{
	__int128_t	num;
	int			i;
	int			len;
	int			sign;

	num = 0;
	i = 0;
	len = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
	|| str[i] == '\f')
		i++;
	str[i] == '-' ? (sign = -1) : 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] == '0')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
		len++;
	}
	return (num * sign);
}
