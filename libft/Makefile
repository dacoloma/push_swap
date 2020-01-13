# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcoloma <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/07 15:06:12 by dcoloma           #+#    #+#              #
#    Updated: 2019/09/05 14:38:58 by dcoloma          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

INCLUDES = includes

HEADER = includes/libft.h includes/ft_printf.h

CC = gcc

CFLAGS = -Wall -Wextra -Werror -I $(INCLUDES) -g

DIR_COND = condition
DIR_CONV = conv
DIR_LST = lst
DIR_MEM = mem
DIR_PRINT = print
DIR_STR = str
DIR_PRINTF = ft_printf

PRINTF =	$(DIR_PRINTF)/ft_format.c \
			$(DIR_PRINTF)/ft_get_flag.c \
			$(DIR_PRINTF)/ft_init.c \
			$(DIR_PRINTF)/ft_minilibft.c \
			$(DIR_PRINTF)/ft_flags.c \
			$(DIR_PRINTF)/ft_free_printf.c \
			$(DIR_PRINTF)/ft_get_params.c \
			$(DIR_PRINTF)/ft_prefix_signed.c \
			$(DIR_PRINTF)/ft_wildcard.c

SRC_COND =	$(DIR_COND)/ft_is_prime.c \
			$(DIR_COND)/ft_isalnum.c \
			$(DIR_COND)/ft_isalpha.c \
			$(DIR_COND)/ft_isascii.c \
			$(DIR_COND)/ft_isdigit.c \
			$(DIR_COND)/ft_isprint.c 

SRC_CONV =	$(DIR_CONV)/ft_atoi.c \
			$(DIR_CONV)/ft_hhtoa_base.c \
			$(DIR_CONV)/ft_htoa_base.c \
			$(DIR_CONV)/ft_itoa.c \
			$(DIR_CONV)/ft_lftoa.c \
			$(DIR_CONV)/ft_lltoa_base.c \
			$(DIR_CONV)/ft_ltoa_base.c \
			$(DIR_CONV)/ft_u_hhtoa_base.c \
			$(DIR_CONV)/ft_u_htoa_base.c \
			$(DIR_CONV)/ft_u_itoa_base.c \
			$(DIR_CONV)/ft_u_ltoa_base.c \
			$(DIR_CONV)/ft_u_lltoa_base.c \
			$(DIR_CONV)/ft_tolower.c \
			$(DIR_CONV)/ft_toupper.c
SRC_LST =	$(DIR_LST)/ft_lstadd.c \
			$(DIR_LST)/ft_lstdel.c \
			$(DIR_LST)/ft_lstdelone.c \
			$(DIR_LST)/ft_lstiter.c \
			$(DIR_LST)/ft_lstmap.c \
			$(DIR_LST)/ft_lstnew.c
SRC_MEM =	$(DIR_MEM)/ft_bzero.c \
			$(DIR_MEM)/ft_memalloc.c \
			$(DIR_MEM)/ft_memccpy.c \
			$(DIR_MEM)/ft_memchr.c \
			$(DIR_MEM)/ft_memcmp.c \
			$(DIR_MEM)/ft_memcpy.c \
			$(DIR_MEM)/ft_memdel.c \
			$(DIR_MEM)/ft_memmove.c \
			$(DIR_MEM)/ft_memset.c
SRC_PRINT =	$(DIR_PRINT)/ft_print_address.c \
			$(DIR_PRINT)/ft_print_decimal.c \
			$(DIR_PRINT)/ft_print_hexa.c \
			$(DIR_PRINT)/ft_print_octal.c \
			$(DIR_PRINT)/ft_print_udecimal.c \
			$(DIR_PRINT)/ft_print_char.c \
			$(DIR_PRINT)/ft_print_float.c \
			$(DIR_PRINT)/ft_print_modulo.c \
			$(DIR_PRINT)/ft_print_str.c \
			$(DIR_PRINT)/ft_printf.c \
			$(DIR_PRINT)/ft_putbuf.c \
			$(DIR_PRINT)/ft_putchar.c \
			$(DIR_PRINT)/ft_putchar_fd.c \
			$(DIR_PRINT)/ft_putendl.c \
			$(DIR_PRINT)/ft_putendl_fd.c \
			$(DIR_PRINT)/ft_putnbr.c \
			$(DIR_PRINT)/ft_putnbr_fd.c \
			$(DIR_PRINT)/ft_putstr.c \
			$(DIR_PRINT)/ft_putstr_fd.c \
			$(DIR_PRINT)/ft_putnbr_base.c
SRC_STR =	$(DIR_STR)/ft_strcat.c \
			$(DIR_STR)/ft_strchr.c \
			$(DIR_STR)/ft_strclr.c \
			$(DIR_STR)/ft_strcmp.c \
			$(DIR_STR)/ft_strcpy.c \
			$(DIR_STR)/ft_strdel.c \
			$(DIR_STR)/ft_strdup.c \
			$(DIR_STR)/ft_strequ.c \
			$(DIR_STR)/ft_striter.c \
			$(DIR_STR)/ft_striteri.c \
			$(DIR_STR)/ft_strjoin.c \
			$(DIR_STR)/ft_strlcat.c \
			$(DIR_STR)/ft_strlen.c \
			$(DIR_STR)/ft_strmap.c \
			$(DIR_STR)/ft_strmapi.c \
			$(DIR_STR)/ft_strncat.c \
			$(DIR_STR)/ft_strncmp.c \
			$(DIR_STR)/ft_strncpy.c \
			$(DIR_STR)/ft_strnequ.c \
			$(DIR_STR)/ft_strnew.c \
			$(DIR_STR)/ft_strnstr.c \
			$(DIR_STR)/ft_strrchr.c \
			$(DIR_STR)/ft_strsplit.c \
			$(DIR_STR)/ft_strstr.c \
			$(DIR_STR)/ft_strsub.c \
			$(DIR_STR)/ft_strtrim.c


SRC =	$(SRC_COND) $(SRC_CONV) $(SRC_LST) $(SRC_MEM) $(SRC_PRINT) $(SRC_STR) $(PRINTF)\
		ft_range.c \
		ft_swap.c \
		ft_sort_integer.c \
		get_next_line.c
DIR_OBJ = obj

OBJ = $(SRC:.c=.o)

$(NAME): $(DIR_OBJ) $(OBJ) $(HEADER) 
	@ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	@mv $(OBJ) $(DIR_OBJ)
.PHONY = all clean fclean re

$(DIR_OBJ): 
	mkdir -p $(DIR_OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

all: $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -fr $(DIR_OBJ)

re: fclean all
