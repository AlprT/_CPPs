SRC = main.cpp Zombie.cpp zombieHorde.cpp
OBJ = $(SRC:.cpp=.o)
CC = g++
RM = rm -f
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

NAME = zombie

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
	@clear

clean:
	$(RM) $(OBJ)
	@clear

fclean: clean
	$(RM) $(NAME)
	@clear

re: fclean all

.PHONY: all clean fclean re
