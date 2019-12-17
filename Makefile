# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgarse <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/09 15:07:03 by lgarse            #+#    #+#              #
#    Updated: 2019/12/17 15:51:24 by avenonat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_CH	=	checker
NAME_PS	=	push_swap
NAME_IN	=	includes

GC_FLGS	+=  -Wall -Wextra -Werror -g

SRC_PSW	=	./srcs_push_swap/
SRC_CHK	=	./srcs_checker/
SRC_OTH	=	./srcs/
INC_DIR	=	./includes/ $(LB_PATH)/includes/
OBJ_PSW	=	./obj_push_swap/
OBJ_CHK	=	./obj_checker/
LB_PATH	=	./libft/
LB_LINK	=	-L ./libft -lft

PS_SRCS	=	push_swap.c searching.c

TH_SRCS	=	ft_operations.c ft_reader.c check_order.c

CH_SRCS	=	checker.c ps_visual.c

PS_OBJS	=	$(PS_SRCS:.c=.o)
TH_OBJS	=	$(TH_SRCS:.c=.o)
CH_OBJS	=	$(CH_SRCS:.c=.o)

OBJS_PS	=	$(addprefix $(OBJ_PSW), $(PS_OBJS) $(TH_OBJS))
OBJS_CH	=	$(addprefix $(OBJ_CHK), $(CH_OBJS) $(TH_OBJS))
INC 	=	$(addprefix -I, $(INC_DIR))

BLK		=	'\x1B[0;30m'
RED		=	'\x1B[0;31m'
GRN		=	'\x1B[0;32m'
BRW		=	'\x1B[0;33m'
BLE		=	'\x1B[0;34m'
PUR		=	'\x1B[0;35m'
CYN		=	'\x1B[0;36m'
LGY		=	'\x1B[0;37m'
DGY		=	'\x1B[1;30m'
LRD		=	'\x1B[1;31m'
LGR		=	'\x1B[1;32m'
YEL		=	'\x1B[1;33m'
LBL		=	'\x1B[1;34m'
FIL		=	'\x1B[1;35m'
LCN		=	'\x1B[1;36m'
WHT		=	'\x1B[1;37m'
WCR		=	'\x1B[0m'

all: $(NAME_IN) $(NAME_PS) $(NAME_CH)
	@make -C $(LB_PATH)

$(NAME_IN): ./includes/push_swap.h
	@rm -rf $(OBJ_PSW)
	@rm -rf $(OBJ_CHK)

$(NAME_PS): $(OBJS_PS)
	@gcc -o $(NAME_PS) $(OBJS_PS) $(LB_LINK)
	@echo $(GRN)$(NAME_PS) "ready"

$(NAME_CH): $(OBJS_CH)
	@gcc -o $(NAME_CH) $(OBJS_CH) $(LB_LINK)
	@echo $(GRN)$(NAME_CH) "ready"

$(OBJ_PSW)%.o: $(SRC_PSW)%.c
	@mkdir -p $(OBJ_PSW)
	@$(GC_FLGS) $(INC) -o $@ -c $<

$(OBJ_PSW)%.o: $(SRC_OTH)%.c
	@mkdir -p $(OBJ_PSW)
	@$(GC_FLGS) $(INC) -o $@ -c $<

$(OBJ_CHK)%.o: $(SRC_CHK)%.c
	@mkdir -p $(OBJ_CHK)
	@$(GC_FLGS) $(INC) -o $@ -c $<

$(OBJ_CHK)%.o: $(SRC_OTH)%.c
	@mkdir -p $(OBJ_CHK)
	@$(GC_FLGS) $(INC) -o $@ -c $<

clean:
	@make -C $(LB_PATH) clean
	@rm -rf $(OBJ_PSW)
	@rm -rf $(OBJ_CHK)
	@echo $(LRD)"objects" $(NAME_PS) "&" $(NAME_CH) "deleted"

fclean:
	@make -C $(LB_PATH) fclean
	@rm -rf $(OBJ_PSW)
	@rm -rf $(OBJ_CHK)
	@echo $(LRD)"objects" $(NAME_PS) "&" $(NAME_CH) "deleted"
	@rm -f $(NAME_PS)
	@rm -f $(NAME_CH)
	@echo $(RED)$(NAME_PS) "&" $(NAME_CH) "deleted"

rand:
	@$(GC_FLGS) randomizer/randomizer.c $(INC) $(LB_LINK) -o randomizer
	@echo $(GRN)"randomizer ready"

re: fclean all
NAME1 = push_swap

NAME2 = checker

FLAGS += -Wall -Wextra -Werror -g

SRC1 = main.c pa.c pb.c push_swap.c ra.c rb.c rr.c rra.c rrb.c rrr.c sa.c sb.c\
	  ss.c skip_box.c check_str.c major.c ask_function.c check_num.c search_min.c\
	  sort.c sort_a.c sort_b.c sum_position.c your_choise.c your_choise2.c\
	  move_b.c sum_position_checker.c prepare_move_pb.c after_pb.c search_minor.c\
	  your_choise_minor.c\

SRC2 =
OBJ1 = $(SRC1:.c=.o)

LIBFT = libft/libft.a

.PHONY = all clean fclean clean re

all: $(NAME)

$(OBJ): %.o: %.c
	@gcc -c $(FLAGS) $< -o $@

$(LIBFT):
	@make -C libft

$(NAME1): $(LIBFT) $(OBJ1)
	@gcc $(OBJ1) $(LIBFT) -o $(NAME1)
	@echo "\033[32mCompiled Executable\033[0m"

$(NAME2): $(LIBFT) $(OBJ2)
	@gcc $(OBJ2) $(LIBFT) -o $(NAME2)
	@echo "\033[32mCompiled Executable\033[0m"

clean:
	@rm -rf $(OBJ1)
	@make -C libft clean
	@echo "\033[32mRemoved Object Files\033[0m"

fclean: clean
	@rm -rf $(NAME1)
	@make -C libft fclean
	@echo "\033[32mRemoved Executable\033[0m"

re: fclean all
