CXX			:=	clang++
CXXFLAGS	:=	-Wall -Wextra -Werror -std=c++98 --pedantic -Wshadow -Wno-shadow
NAME		:=	exe
SRCS		:=	main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
OBJS		:=	$(SRCS:.cpp=.o)

.PHONY		:	all clean fclean re

all			:	$(NAME)
$(NAME)		:	$(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean		:
	$(RM) -rf $(OBJS)

fclean		:	clean
	$(RM) $(NAME)

re			:	fclean all
