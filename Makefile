# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgarse <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/09 15:07:03 by lgarse            #+#    #+#              #
#    Updated: 2020/01/31 13:59:36 by avenonat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


PSW_TARGET      = push_swap
CH_TARGET       = checker

CC              = gcc
CFLAGS          = -Wall -Wextra -Werror -g

LIBFT           = ./libft/libft.a
LIBFTINC        = -I./libft/
LIBFTLINK       = -L./libft -lft

PSW_SRC_PATH    = ./srcs/
PSW_FILES       = main.c pa.c pb.c push_swap.c ra.c rb.c rr.c rra.c rrb.c\
                  rrr.c sa.c sb.c ss.c skip_box.c check_str.c major.c\
                  check_num.c free_stack.c looking_str.c free_new.c\
                  index_assignment.c if_sorted.c until_five.c\
                  three_variables.c over_three_variables.c pb_5_variables.c\
                  distance.c until_twenty.c making_dec.c distance_2.c\
                  until_hundred_one.c first_part.c second_part.c sort_it.c\
                  move_first.c move_second.c move_third.c move_fourth.c\
                  put_down.c check_int.c sort.c until_five_functions.c\
                  move_back.c pa_20_var.c plus_check.c\

PSW_OBJ_PATH    = ./ps_objs/
PSW_SRC         = $(addprefix $(PSW_SRC_PATH), $(PSW_FILES))
PSW_OBJ         = $(addprefix $(PSW_OBJ_PATH), $(PSW_FILES:.c=.o))
PSW_INC         = -I./includes/ $(LIBFTINC)

CH_SRC_PATH     = ./srcs/
CH_FILES        =  get_next_line.c pa.c pb.c ra.c rb.c rr.c rra.c rrb.c rrr.c sa.c sb.c\
                   ss.c check_str.c push_swap.c check_num.c skip_box.c free_new.c\
                   check_int.c plus_check.c if_sorted.c free_stack.c checker_main.c\
                   read_number.c error.c\

CH_OBJ_PATH     = ./pc_objs/
CH_SRC          = $(addprefix $(CH_SRC_PATH), $(CH_FILES))
CH_OBJ          = $(addprefix $(CH_OBJ_PATH), $(CH_FILES:.c=.o))
CH_INC          = -I./includes/ $(LIBFTINC)

.PHONY: all clean fclean re

all: $(PSW_TARGET) $(CH_TARGET)

$(PSW_TARGET): $(PSW_OBJ)
	@echo "\033[1;34mpush_swap : Sources compiling...\033[0m"
	@make -C ./libft/
	@$(CC) $(CFLAGS) $(PSW_INC) -o $@ $(PSW_OBJ) $(LIBFTLINK)
	@echo "\033[1;36mpush_swap : compiled with success!\033[2m"

$(CH_TARGET): $(CH_OBJ)
	@echo "\033[1;31mchecker : Sources compiling...\033[0m"
	@$(CC) $(CFLAGS) $(CH_INC) -o $@ $(CH_OBJ) $(LIBFTLINK)
	@echo "\033[1;35mchecker : compiled with success!\033[0m"

$(PSW_OBJ_PATH)%.o: $(PSW_SRC_PATH)%.c
	@mkdir $(PSW_OBJ_PATH) 2> /dev/null || true
	@$(CC) $(CFLAGS) $(PSW_INC) $(LIBFTINC) -o $@ -c $<

$(CH_OBJ_PATH)%.o: $(CH_SRC_PATH)%.c
	@mkdir $(CH_OBJ_PATH) 2> /dev/null || true
	@$(CC) $(CFLAGS) $(CH_INC) $(LIBFTINC) -o $@ -c $<

clean:
	@make -C libft/ clean
	@rm -rf $(PSW_OBJ)
	@rmdir $(PSW_OBJ_PATH) 2> /dev/null || true
	@rm -f $(CH_OBJ)
	@rmdir $(CH_OBJ_PATH) 2> /dev/null || true
	@echo "\033[1;30mObjects removed\033[0m"

fclean: clean
	@make -C libft/ fclean
	@rm -f $(PSW_TARGET) $(CH_TARGET)
	@echo "\033[1;30m./checker and ./push_swap removed\033[0m"

re: fclean all
	@make -C libft/ re
