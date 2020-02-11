/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 17:16:52 by avenonat          #+#    #+#             */
/*   Updated: 2020/01/31 17:16:52 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s2;
	unsigned char	c2;

	i = 0;
	c2 = (unsigned char)c;
	s2 = (unsigned char*)s;
	while (n > i)
	{
		if (s2[i] == c2)
			return (&s2[i]);
		i++;
	}
	return (NULL);
}
