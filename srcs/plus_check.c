/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   plus_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 14:40:08 by avenonat          #+#    #+#             */
/*   Updated: 2020/01/30 14:48:22 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

int		plus_check(char *s)
{
	char	*temp;
	char	*temp1;

	temp = ft_itoa(ft_atoi(s));
	temp1 = ft_itoa(ft_atoi(&s[1]));
	if (((s[0] == '+') && (ft_strcmp(&s[1], temp1))) ||
	((s[0] != '+') && ft_strcmp(s, temp)))
	{
		free(temp);
		free(temp1);
		return (1);
	}
	else
	{
		free(temp);
		free(temp1);
		return (0);
	}
}
