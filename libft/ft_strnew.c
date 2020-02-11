/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 17:13:53 by avenonat          #+#    #+#             */
/*   Updated: 2020/01/31 17:13:53 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnew(size_t size)
{
	char	*str;

	str = (char*)malloc(sizeof(*str) * (size + 1));
	if (!str)
		return (NULL);
	ft_memset(str, '\0', size + 1);
	return (str);
}
