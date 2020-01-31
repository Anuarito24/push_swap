/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 14:25:07 by lgarse            #+#    #+#             */
/*   Updated: 2019/12/18 23:34:57 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strsub(char const *s, unsigned int start, size_t n)
{
	char			*gs;
	unsigned int	i;

	if (!s)
		return (NULL);
	gs = (char*)malloc(sizeof(*gs) * (n + 1));
	if (!gs)
		return (NULL);
	i = 0;
	while (n-- > 0)
	{
		if (s[start + i] == '\0')
			return (0);
		gs[i] = s[start + i];
		i++;
	}
	gs[i] = '\0';
	return (gs);
}
