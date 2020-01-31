/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/17 22:23:10 by avenonat          #+#    #+#             */
/*   Updated: 2020/01/31 16:37:53 by avenonat         ###   ########.fr       */
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
	int					data;
	int					index;
	struct s_folder		*next;
}						t_folder;

typedef	struct			s_num
{
	int					count_a;
	int					count_b;
	int					half;
	int					fourth;
	int					octal;
}						t_num;

int						ft_new_line(char **s, char **line, int fd, int ret);
int						compare_command(t_folder **stack_a, t_folder **stack_b,
						char *line, t_num *ssl);
t_folder				*read_number(char **argv, t_num *ssl);
int						get_next_line(const int fd, char **line);
int						check_str(char **str);
int						plus_check(char *s);
int						push_swap(char **new, t_folder **stack_a);
t_folder				*skip_box(t_folder **stack_a);
int						major(t_folder **stack_a, t_folder **stack_b,
						t_num *ssl);
int						check_num(int a, t_folder **stack_a);
void					free_stack(t_folder **stack_a, t_folder **stack_b);
void					sa(t_folder **stack_a, int i);
void					sb(t_folder **stack_b, int i);
void					ss(t_folder **stack_a, t_folder **stack_b, int i);
void					pa(t_folder **stack_a, t_folder **stack_b,
						t_num *ssl, int i);
void					pb(t_folder **stack_a, t_folder **stack_b,
						t_num *ssl, int i);
void					ra(t_folder **st, int i);
void					rb(t_folder **st, int i);
void					rr(t_folder **stack_a, t_folder **stack_b, int i);
void					rra(t_folder **st, int i);
void					rrb(t_folder **st, int i);
void					rrr(t_folder **stack_a, t_folder **stack_b, int i);
void					looking_str(char **new, t_folder **stack_a, t_num *ssl);
void					free_new(char **new);
int						if_sorted(t_folder **stack_a);
void					until_five(t_folder **stack_a, t_folder **stack_b,
						t_num *ssl);
void					three_variables(t_folder **stack_a);
void					over_three_variables(t_folder **stack_a,
						t_folder **stack_b, t_num *ssl);
void					pb_5_variables(t_folder **stack_a, t_folder **stack_b,
						t_num *ssl, int i);
int						distance(t_folder **stack_a, int i);
void					until_twenty(t_folder **stack_a, t_folder **stack_b,
						t_num *ssl);
void					making_dec(t_folder **stack_a, t_folder **stack_b,
						t_num *ssl, int low);
void					pa_20_var(t_folder **stack_a, t_folder **stack_b,
						t_num *ssl, int i);
int						distance_2(t_folder **stack_b, t_num *ssl, int i);
void					until_hundred_one(t_folder **stack_a,
						t_folder **stack_b, t_num *ssl);
void					first_part(t_folder **stack_a, t_folder **stack_b,
						t_num *ssl);
void					second_part(t_folder **stack_a, t_folder **stack_b,
						t_num *ssl);
void					sort_it(t_folder **stack_a, t_folder **stack_b,
						t_num *ssl);
void					move_first(t_folder **stack_a, t_folder **stack_b,
						t_num *ssl);
void					move_second(t_folder **stack_a, t_folder **stack_b,
						t_num *ssl);
void					move_third(t_folder **stack_a, t_folder **stack_b,
						t_num *ssl);
void					move_fourth(t_folder **stack_a, t_folder **stack_b,
						t_num *ssl);
void					put_down(t_folder **stack_a, int i);
void					check_int(char *new, t_folder *head,
						t_folder **stack_a);
int						*sort(int *good, t_num *ssl);
void					move_back(t_folder **stack_a, t_folder **stack_b,
						t_num *ssl, int low);
void					until_five_1_1(t_folder **stack_a);
void					until_five_1_2(t_folder **stack_a);
void					until_five_1_3(t_folder **stack_a);
void					until_five_1_4(t_folder **stack_a);
void					until_five_1_5(t_folder **stack_a);
int						compare_command2(t_folder **stack_a, t_folder **stack_b,
						char *line, int i);
void					check_order(t_folder **stack_a, t_num *ssl);
void					index_assignment(t_folder **stack_a, t_num *ssl);
void					error(void);

#endif
