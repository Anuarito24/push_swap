/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 17:15:27 by avenonat          #+#    #+#             */
/*   Updated: 2020/01/31 17:15:27 by avenonat         ###   ########.fr       */
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
