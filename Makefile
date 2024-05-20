CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a

SRC = ft_printf.c \
 	ft_put_adress.c \
  	ft_putchar.c \
   	ft_puthexa.c \
   	ft_putnbr.c \
	ft_putnbr_ns.c \
	ft_putstr.c \
	ft_strlen.c \


OBJ = $(SRC:.c=.o)

all: $(NAME)
	@echo "done"

$(NAME):
	@CC $(CFLAGS) -c $(SRC)
	@ar rc $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ)
	@echo "OBJ deleted"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) deleted"

re: fclean all
.PHONY:	clean all re fclean
