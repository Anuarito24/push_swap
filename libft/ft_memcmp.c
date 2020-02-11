/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 17:16:43 by avenonat          #+#    #+#             */
/*   Updated: 2020/01/31 17:16:43 by avenonat         ###   ########.fr       */
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
