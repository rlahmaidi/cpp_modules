C = c++
FLAG = -Wall -Wextra -Werror
NAME = phonebook
SRCS = ex01.cpp geters_and_seters.cpp

all: $(NAME)

$(NAME): $(SRCS)
			$(C) $(FLAG) $(SRCS) -o $(NAME)

clean:
			rm -rf *.o
fclean : clean
			rm -rf $(NAME)

re: fclean all