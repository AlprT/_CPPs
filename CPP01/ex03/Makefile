NAME = zombie

SRCS = main.cpp \
		HumanA.cpp \
		HumanB.cpp \
		Weapon.cpp

OBJS = $(SRCS:.cpp=.o)

CC = g++
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
