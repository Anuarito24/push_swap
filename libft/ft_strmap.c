/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 12:56:11 by lgarse            #+#    #+#             */
/*   Updated: 2019/12/07 12:42:32 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmap(char const *s, char (*f)(char))
{
	unsigned int	l;
	unsigned int	i;
	char			*arr;

	if (!s || !f)
		return (NULL);
	i = 0;
	l = ft_strlen(s);
	arr = (char*)malloc(l + 1);
	if (!arr)
		return (NULL);
	while (*s)
		arr[i++] = (*f)(*s++);
	arr[i] = '\0';
	return (arr);
}
