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

CFLAGS = -g3 -fsanitize=address,undefined -Wall -Wextra -Werror 

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

all: $(DIR_OBJ) $(NAME) $(CHECKER)

$(DIR_OBJ): 
	mkdir -p $(DIR_OBJ)

$(LIBFT) : FORCE
	$(MAKE) -C libft/

FORCE:

$(DIR_OBJ)/%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -o $@ -c $< -I $(HEADER)

$(NAME) : $(LIBFT) $(OBJ) push_swap.c
	$(CC) $(CFLAGS) -o $(NAME) push_swap.c -g $(OBJ) -L libft/ -lft -I $(HEADER)

$(CHECKER): $(LIBFT) $(OBJ) checker.c
	$(CC) $(CFLAGS) -o $(CHECKER) checker.c -g $(OBJ) -L libft/ -lft -I $(HEADER)

clean:
	$(MAKE) clean -C libft/
	$(RM) -r $(DIR_OBJ)

fclean: clean
	$(RM) $(NAME) $(CHECKER)
	$(MAKE) -C libft/ fclean

re: fclean all
