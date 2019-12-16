/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   after_pb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/16 16:59:25 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/16 19:10:10 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	after_pb(t_folder **s_b, t_num *ssl, int j)
{
	if (j < (ssl->count_b) / 2)
	{
		while (j)
		{
			j--;
			rb(s_b);
			write(1, "rb\n", 3);
		}
	}
	else
	{
		while (j)
		{
			j--;
			rrb(s_b);
			write(1, "rrb\n", 4);
		}
	}
}





//	if (temp->data > temp->next->data || temp->next != NULL)
//	{
//		while (temp->data > temp->next->data || temp->next != NULL)
//		{
//			temp = temp->next;
//			i++;
//		}
//	}
//	else if (temp->data < temp->next->data || temp->next != NULL)
//	{
//		while (temp->data < temp->next->data || temp->next != NULL)
//		{
//			temp = temp->next;
//			z++;
//		}
//	}





//	if (ssl->count_b - j > j)
//	{
//		while (j)
//		{
//			rb(s_b);
//			write(1, "rb\n", 3);
//			j--;
//		}
//	}
//	else
//	{
//		while (j)
//		{
//			rrb(s_b);
//			write(1, "rrb\n", 3);
//			j--;
//		}
//	}









//	if (z < i)
//  	{
//  		while (ssl->count_b > j)
//	{
//		rb(s_b);
//		write(1, "rb\n", 3);
//		j--;
//		z--;
//	}
//
//  }
//  else if (z > i)
//  {
//	  while (ssl->count_b > j)
//	  {
//		  rrb(s_b);
//		  write(1, "rrb\n", 3);
//		  j--;
//		  i--;
//	  }
//  }