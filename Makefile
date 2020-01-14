# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcoloma <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/26 11:38:55 by dcoloma           #+#    #+#              #
#    Updated: 2019/10/30 13:37:43 by dcoloma          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CHECKER = checker

HEADER = libft/includes

LIBFT = libft/libft.a

CC = gcc

CF = -Wall -Wextra -Werror -I $(HEADER)

SRC =	ft_init.c\
		ft_putstr_err.c\
		ft_isnumber.c\
		ft_is_valid.c\
		ft_swap.c\
		ft_push.c\
		ft_rotate.c\
		ft_rrotate.c\
		ft_check_sort.c\
		ft_check_split.c\
		ft_get_index.c\
		ft_get_max_index.c\
		ft_get_med.c\
		ft_get_min_index.c\
		ft_get_sorted_pos.c\
		ft_get_best_rot.c\
		ft_sort.c\
		ft_sort_stack.c\
		ft_sort_stack_a.c\
		ft_medium_stack.c\
		ft_long_stack.c\
		ft_free.c\
		ft_rot_count.c\
		ft_print_piles.c

DIR_OBJ = obj_push_swap

OBJ = $(SRC:%.c=$(DIR_OBJ)/%.o)

.PHONY = all clean fclean re

all: $(LIBFT) $(DIR_OBJ) $(NAME) $(CHECKER) $(SRC) $(OBJ)

$(DIR_OBJ): 
	mkdir -p $(DIR_OBJ)

$(LIBFT) :
	make -C libft/

$(DIR_OBJ)/%.o: %.c
	$(CC) $(CF) -o $@ -c $< 

$(NAME) : $(LIBFT) $(OBJ) push_swap.c
	$(CC) $(CF) -o $(NAME) push_swap.c -g $(OBJ) -L libft/ -lft
$(CHECKER): $(LIBFT) $(OBJ) checker.c
	$(CC) $(CF) -o $(CHECKER) checker.c -g $(OBJ) -L libft/ -lft
clean:
	make clean -C libft/
	rm -rf $(DIR_OBJ)

fclean: clean
	rm -f $(NAME) $(CHECKER)
	make -C libft/ fclean

re: fclean all
