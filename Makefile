# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgarse <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/09 15:07:03 by lgarse            #+#    #+#              #
#    Updated: 2019/12/15 20:44:46 by avenonat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

FLAGS += -Wall -Wextra -Werror -g

SRC = main.c pa.c pb.c push_swap.c ra.c rb.c rr.c rra.c rrb.c rrr.c sa.c sb.c\
	  ss.c skip_box.c check_str.c major.c ask_function.c check_num.c search_min.c\
	  sort.c sort_a.c sort_b.c sum_position.c your_choise.c your_choise2.c\
	  move_b.c sum_position_checker.c prepare_move_pb.c\

OBJ = $(SRC:.c=.o)

LIBFT = libft/libft.a

.PHONY = all clean fclean clean re

all: $(NAME)

$(OBJ): %.o: %.c
	@gcc -c $(FLAGS) $< -o $@

$(LIBFT):
	@make -C libft

$(NAME): $(LIBFT) $(OBJ)
	@gcc $(OBJ) $(LIBFT) -o $(NAME)
	@echo "\033[32mCompiled Executable\033[0m"

clean:
	@rm -rf $(OBJ)
	@make -C libft clean
	@echo "\033[32mRemoved Object Files\033[0m"

fclean: clean
	@rm -rf $(NAME)
	@make -C libft fclean
	@echo "\033[32mRemoved Executable\033[0m"

re: fclean all
