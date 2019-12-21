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

# gww -o test main.c libftprintf.a libft/libft.a -I libft/includes

NAME = push_swap

CHECKER = checker

HEADER = libft/includes

LIBFT = libft/libft.a

CC = gcc

CF = -Wall -Wextra -Werror -I $(HEADER)

SRC =	ft_init.c\
		ft_putstr_err.c\
		ft_is_valid.c\
		ft_swap.c\
		ft_push.c\
		ft_rotate.c\
		ft_rrotate.c\
		ft_check_sort.c\
		ft_get_med.c\
		ft_sort.c\
		print_piles.c
	# 	checker.c\
	#   push_swap.c

OBJ = $(SRC:.c=.o)

.PHONY = all clean fclean re

all: $(LIBFT) $(NAME) $(CHECKER)

$(LIBFT) :
	make -C libft/

%.o : %.c
	$(CC) $(CF) -o $@ -c $< -g

$(NAME) : $(LIBFT) $(OBJ) push_swap.c checker.c
	#cp $(LIBFT) ./$(NAME)
	# ar rc $(NAME) $(OBJ)
	# ranlib $(NAME)
	$(CC) $(CF) -o $(NAME) push_swap.c -g $(OBJ) -L libft/ -lft
	$(CC) $(CF) -o $(CHECKER) checker.c -g $(OBJ) -L libft/ -lft
clean:
	make clean -C libft/
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) $(CHECKER)
	make -C libft/ fclean

re: fclean all
