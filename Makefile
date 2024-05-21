# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/06 04:51:25 by ymaaloum          #+#    #+#              #
#    Updated: 2024/05/21 03:22:27 by ymaaloum         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a

SRC_DIR = src
OBJ_DIR = obj

SRC = 	$(SRC_DIR)/ft_printf.c \
		$(SRC_DIR)/ft_put_adress.c \
		$(SRC_DIR)/ft_putchar.c \
		$(SRC_DIR)/ft_puthexa.c \
		$(SRC_DIR)/ft_putnbr.c \
		$(SRC_DIR)/ft_putnbr_ns.c \
		$(SRC_DIR)/ft_putstr.c \
		$(SRC_DIR)/ft_strlen.c

OBJ = $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

all: $(NAME)
	@echo "done"

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	@rm -f $(OBJ)
	@echo "OBJ deleted"

fclean: clean
	@rm -f $(NAME)
	@rm -rf $(OBJ_DIR)
	@echo "$(NAME) deleted"

re: fclean all

.PHONY: clean all re fclean
