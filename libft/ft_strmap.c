/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 17:14:31 by avenonat          #+#    #+#             */
/*   Updated: 2020/01/31 17:14:31 by avenonat         ###   ########.fr       */
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
