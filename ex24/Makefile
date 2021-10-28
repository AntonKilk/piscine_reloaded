NAME = libft.a

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c \
		srcs/ft_strlen.c srcs/ft_swap.c

OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all:
	gcc -Wall -Wextra -Werror -c -I./includes/ $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	rm $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
