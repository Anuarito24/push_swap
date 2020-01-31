/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_new.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 17:49:49 by avenonat          #+#    #+#             */
/*   Updated: 2020/01/28 17:49:49 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	free_new(char **new)
{
	int i;

	i = 0;
	while (new[i])
		free(new[i++]);
	free(new);
}
