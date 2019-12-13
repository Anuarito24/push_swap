/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 12:25:14 by lgarse            #+#    #+#             */
/*   Updated: 2019/12/07 12:42:32 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	l;
	char	*h;

	h = (char*)haystack;
	if (!(*needle))
		return (h);
	l = ft_strlen(needle);
	i = 0;
	while (h[i] != '\0' && (l + i) <= len)
	{
		j = 0;
		while (h[i + j] == needle[j])
		{
			if (j == (l - 1))
				return (h + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
