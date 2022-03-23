C = c++ -std=c++98
FLAG = -Wall -Wextra -Werror
NAME = ex01
SRCS = Zombie.cpp main.cpp ZombieHorde.cpp 

all: $(NAME)

$(NAME): $(SRCS)
			$(C) $(FLAG) $(SRCS) -o $(NAME)

clean:
			rm -rf *.o
fclean : clean
			rm -rf $(NAME)

re: fclean all