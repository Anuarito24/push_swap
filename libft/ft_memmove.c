/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 17:16:24 by avenonat          #+#    #+#             */
/*   Updated: 2020/01/31 17:16:24 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *d;
	char *s;

	d = (char*)dst;
	s = (char*)src;
	if (len == 0 || d == s)
		return (dst);
	if (d < s)
	{
		while (len)
		{
			*d++ = *s++;
			len--;
		}
	}
	else
	{
		while (len--)
			d[len] = s[len];
	}
	return (dst);
}
