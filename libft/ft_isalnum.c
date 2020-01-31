/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 16:11:50 by avenonat          #+#    #+#             */
/*   Updated: 2020/01/31 16:11:50 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c <= '9' && c >= '0') || (c <= 'z' && c >= 'a')\
	|| (c <= 'Z' && c >= 'A'))
		return (1);
	return (0);
}
