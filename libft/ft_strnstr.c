/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 17:13:48 by avenonat          #+#    #+#             */
/*   Updated: 2020/01/31 17:13:48 by avenonat         ###   ########.fr       */
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
