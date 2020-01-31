/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_words.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 16:11:45 by avenonat          #+#    #+#             */
/*   Updated: 2020/01/31 16:11:45 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_find_words(char *str, char c, int *index)
{
	int			i;
	int			start;
	int			end;
	char		*dest;

	start = *index;
	i = start;
	while (!(str[i] == c))
		if (str[i] != '\0')
			i++;
		else
			break ;
	end = i;
	dest = (char*)malloc(end - start + 1);
	while (str[i] == c)
		i++;
	*index = i;
	i = 0;
	while (i < end - start)
	{
		dest[i] = str[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
