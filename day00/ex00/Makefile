C = c++
FLAG = -Wall -Wextra -Werror
NAME = megaphone
SRCS = ex00.cpp 

all: $(NAME)

$(NAME): $(SRCS)
			$(C) $(FLAG) $(SRCS) -o $(NAME)

clean:
			rm -rf *.o
fclean : clean
			rm -rf $(NAME)

re: fclean all