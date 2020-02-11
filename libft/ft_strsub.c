/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 17:13:23 by avenonat          #+#    #+#             */
/*   Updated: 2020/01/31 17:13:23 by avenonat         ###   ########.fr       */
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
