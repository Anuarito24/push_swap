/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 17:14:25 by avenonat          #+#    #+#             */
/*   Updated: 2020/01/31 17:14:25 by avenonat         ###   ########.fr       */
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
