/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 15:24:14 by lgarse            #+#    #+#             */
/*   Updated: 2019/12/07 12:42:32 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	char	*gs;
	int		i;

	if ((char)c == '\0')
		return ((char*)s + ft_strlen(s));
	i = 0;
	gs = (char *)s;
	while (gs[i] != '\0')
	{
		if (gs[i] == (char)c)
			return (&gs[i]);
		i++;
	}
	return (NULL);
}
