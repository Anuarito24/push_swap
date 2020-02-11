/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 17:15:03 by avenonat          #+#    #+#             */
/*   Updated: 2020/01/31 17:15:03 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s1)
{
	char	*c1;
	int		i;

	c1 = (char *)malloc(sizeof(*c1) * (ft_strlen(s1) + 1));
	if (!c1)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		c1[i] = s1[i];
		i++;
	}
	c1[i] = '\0';
	return (c1);
}
