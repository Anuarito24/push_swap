/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 13:19:36 by lgarse            #+#    #+#             */
/*   Updated: 2019/12/17 16:40:05 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H
# define BUFF_SIZE 10

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <limits.h>
# include "../libft/libft.h"

typedef	struct			s_folder
{
	int 				data;
	struct s_folder		*next;

}						t_folder;

typedef	struct			s_num
{
	int 				count_a;
	int 				count_b;
}						t_num;

int             ft_new_line(char **s, char **line, int fd, int ret);
int             get_next_line(const int fd, char **line);
int			 	check_str(char **str);
int				push_swap(char **new, t_folder **stack_a);
t_folder 		*skip_box(t_folder **stack_a);
int 			major(t_folder **stack_a, t_folder **stack_b, t_num *ssl);
int			 	check_num(int a, t_folder **stack_a);
int			 	*sort(int *good, t_num *ssl);
int 			*sort_a(t_folder **stack_a, t_num *ssl);
int 			*sort_b(t_folder **stack_b, t_num *ssl);
int				*your_choise(t_folder **stack_a, t_folder **stack_b, t_num *ssl);
int				*your_choise_minor(t_folder **stack_a, t_folder **stack_b, t_num *ssl);
int			 	search_min(int *sum);
int 			search_minor(int *sum);
void		 	ask_function(t_folder **stack_a, t_folder **stack_b, int j, t_num *ssl);
int				your_choise2(t_folder **stack_a, t_folder **stack_b, t_num *ssl);
int 			sum_position(t_folder **stack_a, int *good, int count);
int			 	move_b(t_folder **stack_a, t_folder **stack_b, t_num *ssl);
int				prepare_move_pb(t_folder **s_a, t_folder **s_b, t_num *ssl);
void			after_pb(t_folder **s_b, t_num *ssl, int j);
int				sa(t_folder **stack_a);
int				sb(t_folder **stack_b);
int				ss(t_folder **stack_a, t_folder **stack_b);
int				pa(t_folder **stack_a, t_folder **stack_b, t_num *ssl);
int				pb(t_folder **stack_a, t_folder **stack_b, t_num *ssl);
int    			ra(t_folder **st);
int   			rb(t_folder **st);
int				rr(t_folder **stack_a, t_folder **stack_b);
int   			rra(t_folder **st);
int				rrb(t_folder **stack_b);
int				rrr(t_folder **stack_a, t_folder **stack_b);
int			 	sum_position_checker(t_folder **stack_a, int *good, int count);

#endif