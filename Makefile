# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oohnivch <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/08 13:40:55 by oohnivch          #+#    #+#              #
#    Updated: 2024/04/25 12:30:30 by oohnivch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
#									Variables								   #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
HEADER = -I.
NAME = libftprintf.a
AR = ar rcs
LIBDIR = ./libft
LIB = $(LIBDIR)/libft.a

NORMAL = \033[0m
GREEN = \033[1;32m
PURPLE = \033[1;35m
RED = \033[0;31m
YELLOW = \033[0;33m

# **************************************************************************** #
#									Source Files							   #
# **************************************************************************** #


SRCS = ft_printf.c ft_putchar.c ft_puthex.c ft_putnbr.c \
	   ft_putptr.c ft_putstr.c ft_putuint.c 

OBJ = $(SRCS:%.c=%.o)

# **************************************************************************** #
#									Rules									   #
# **************************************************************************** #

all: $(NAME)

$(NAME): $(LIB) $(OBJ)
	@cp $(LIB) $(NAME)
	@$(AR) $@ $(OBJ)
	@echo "\n$(GREEN)******** $(NAME) Created! ********$(NORMAL)\n"

$(LIB):
	make -C $(LIBDIR) all

%.o: %.c
	@if ! $(CC) $(CFLAGS) -c $< -o $@ $(HEADER) 2> error.txt; then\
		echo "$(RED)!!!!!!!! ERROR !!!!!!!!$(NORMAL)"; \
		echo "$(YELLOW)Error caused by $<$(NORMAL)\n"; \
		sed '$$d' error.txt; \
		echo "\n$(RED)Aborting makefile........$(NORMAL)"; \
		exit 1; \
	fi

clean:
	@make -C $(LIBDIR) clean
	@rm -f $(OBJ) error.txt
	@echo "$(YELLOW)Deleting $(words $(OBJ) error.txt) object file(s) $(NORMAL)"
	@echo "$(GREEN)Deletion success! $(NORMAL)"

fclean:
	@make -C $(LIBDIR) fclean
	@rm -f $(OBJ) $(NAME) error.txt
	@echo "$(YELLOW)Deleting $(NAME) and $(words $(OBJ) error.txt) object file(s) $(NORMAL)" 
	@echo "$(GREEN)Deletion success! $(NORMAL)"

re: fclean all

.PHONY: all clean fclean re
