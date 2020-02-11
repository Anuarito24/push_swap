/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 16:50:50 by avenonat          #+#    #+#             */
/*   Updated: 2020/01/31 16:50:50 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *dst, const void *src,\
					int c, size_t n)
{
	unsigned char	*gd;

	gd = (unsigned char*)dst;
	while (n-- != 0)
	{
		*gd = *(unsigned char*)src;
		if (*gd == (unsigned char)c)
			return ((void*)gd + 1);
		gd++;
		src++;
	}
	return (NULL);
}
