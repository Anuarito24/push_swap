/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 17:13:32 by avenonat          #+#    #+#             */
/*   Updated: 2020/01/31 17:13:32 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;
	char	*h;

	h = (char*)haystack;
	if (!(*needle))
		return (h);
	i = 0;
	while (h[i] != '\0')
	{
		j = 0;
		while ((h[i + j] == needle[j]) && (needle[j]))
			j++;
		if (needle[j] == '\0')
			return (h + i);
		i++;
	}
	return (NULL);
}
