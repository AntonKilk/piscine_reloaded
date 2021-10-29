NAME = ft_display_file
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -o $(NAME) -I ./includes srcs/main.c

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
