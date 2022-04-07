C = c++  -std=c++98
FLAG = -Wall -Wextra -Werror
NAME = ex01
SRCS = main.cpp Animal.cpp Dog.cpp Cat.cpp

all: $(NAME)

$(NAME): $(SRCS)
			$(C) $(FLAG) $(SRCS) -o $(NAME)

clean:
			rm -rf *.o
fclean : clean
			rm -rf $(NAME)

re: fclean all