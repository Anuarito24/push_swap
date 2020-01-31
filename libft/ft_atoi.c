/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/15 13:53:47 by avenonat          #+#    #+#             */
/*   Updated: 2020/01/30 13:38:37 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

int			ft_atoi(const char *str)
{
	long long int			nmbr;
	char					ch;

	nmbr = 0;
	while ((*str < 14 && *str > 8) || *str == 32)
		str++;
	ch = '+';
	if (*str == '-' || *str == '+')
	{
		ch = *str;
		str++;
	}
	while ((*str >= '0') && (*str <= '9'))
	{
		nmbr = nmbr * 10 + (*str - '0');
		str++;
	}
	if (nmbr >= -2147483648 && nmbr <= 2147483647)
		return (ch == '-' ? -nmbr : nmbr);
	else
	{
		write(1, "Error\n", 6);
		exit(0);
	}
}
