# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: idunaver <idunaver@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/08 14:50:16 by idunaver          #+#    #+#              #
#    Updated: 2019/09/20 18:16:04 by idunaver         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all libft clean fclean re

OBJDIR = obj
SRCDIR = src
LIBDIR = libft
HEADER = -I ./include
HEADER_LIBFT = -I ./libft/include -I ./libft/src/ft_printf/include
FLAGS = -Wall -Wextra -Werror -g

CHECKER = checker
SRC_CHECKER_NAME = checker.c \
				work_with_stack.c \
				check_number.c \
				push.c \
				swap.c \
				rotate.c \
				reverse_rotate.c \
				what_operation.c \
				checker_algorythm.c \
				visual.c \
				visual_2.c \
				visual_3.c \
				visual_4.c \
				visual_5.c \
				visual_6.c \
				max_min.c \
				checker_args.c \
				new_av.c
OBJ_CHECKER_NAME = $(SRC_CHECKER_NAME:.c=.o);
SRC_CHECKER = $(addprefix $(OBJDIR)/, $(SRC_CHECKER_NAME))
OBJ_CHECKER = $(addprefix $(OBJDIR)/, $(OBJ_CHECKER_NAME))

PUSH_SWAP = push_swap
SRC_PUSH_SWAP_NAME = push_swap.c \
				work_with_stack.c \
				check_number.c \
				push.c \
				swap.c \
				rotate.c \
				reverse_rotate.c \
				max_min.c \
				algorythm_1.c \
				work_with_list_op.c \
				sort_or_not_sort.c \
				operations_a.c \
				operations.c \
				algorythm_2.c \
				back_to_the_a.c \
				new_av.c
OBJ_PUSH_SWAP_NAME = $(SRC_PUSH_SWAP_NAME:.c=.o);
SRC_PUSH_SWAP = $(addprefix $(OBJDIR)/, $(SRC_PUSH_SWAP_NAME))
OBJ_PUSH_SWAP = $(addprefix $(OBJDIR)/, $(OBJ_PUSH_SWAP_NAME))

all: libft $(CHECKER) $(PUSH_SWAP)

$(CHECKER): $(OBJ_CHECKER)
	@gcc $(FLAGS) $^ -o $@ $(HEADER_LIBFT) $(HEADER) -L libft -lft

$(PUSH_SWAP): $(OBJ_PUSH_SWAP)
	@gcc $(FLAGS) $^ -o $@ -Llibft -lft

$(OBJDIR)/%.o: $(SRCDIR)/%.c include/push_swap.h
	@mkdir -p $(OBJDIR)
	@gcc $(FLAGS) $(HEADER_LIBFT) $(HEADER) -o $@ -c $<

libft:
	@make -C $(LIBDIR)	

clean:
	@make clean -C $(LIBDIR)
	@rm -Rf $(OBJDIR)

fclean: clean
	@make fclean -C $(LIBDIR)
	@rm -Rf $(CHECKER) $(PUSH_SWAP)

re: fclean all

norm:
	norminette $(SRCDIR)
	norminette ./include