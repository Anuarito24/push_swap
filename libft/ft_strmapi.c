/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 13:20:38 by lgarse            #+#    #+#             */
/*   Updated: 2019/12/07 12:42:32 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*gs;
	unsigned int	i;

	if (!s || !f)
		return (0);
	gs = (char*)malloc(sizeof(*gs) * (ft_strlen(s) + 1));
	if (!gs)
		return (NULL);
	i = 0;
	while (s[i])
	{
		gs[i] = f(i, (char)s[i]);
		i++;
	}
	gs[i] = '\0';
	return (gs);
}
