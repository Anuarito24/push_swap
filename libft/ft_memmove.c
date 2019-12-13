/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 17:58:06 by lgarse            #+#    #+#             */
/*   Updated: 2019/12/07 12:42:32 by avenonat         ###   ########.fr       */
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
