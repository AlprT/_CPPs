NAME = Fixed

SRCS = main.cpp Fixed.cpp
OBJS = $(SRCS:.cpp=.o)

CC = c++
RM = rm -f
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)
	@clear

clean:
	$(RM) $(OBJS)
	@clear

fclean: clean
	$(RM) $(NAME)
	@clear

re: fclean all

.PHONY: all clean fclean re
