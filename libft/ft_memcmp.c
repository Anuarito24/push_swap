/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 09:41:52 by lgarse            #+#    #+#             */
/*   Updated: 2019/12/07 12:42:32 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*sg1;
	unsigned char	*sg2;
	size_t			i;

	sg1 = (unsigned char*)s1;
	sg2 = (unsigned char*)s2;
	i = 0;
	while (i < n)
	{
		if (sg1[i] != sg2[i])
			return (sg1[i] - sg2[i]);
		i++;
	}
	return (0);
}
