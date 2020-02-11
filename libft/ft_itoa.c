/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 16:50:00 by avenonat          #+#    #+#             */
/*   Updated: 2020/01/31 16:50:00 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa(int n)
{
	char		*itog;
	int			i;
	short		znak;
	int			pow;

	znak = (n < 0) ? 2 : 1;
	i = 1;
	pow = 1;
	while ((n / pow / 10) != 0 && ++i)
		pow = pow * 10;
	if (!(itog = malloc(sizeof(char) * (unsigned long)(i + znak))))
		return (NULL);
	i = 0;
	if (znak == 2 && (znak = -1))
		itog[i++] = '-';
	while (pow != 0)
	{
		itog[i++] = (char)((int)n / pow * znak + '0');
		n = n % pow;
		pow = pow / 10;
	}
	itog[i++] = '\0';
	return (itog);
}
