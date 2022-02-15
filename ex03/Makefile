NAME=main

CLASS:=MateriaSource.cpp
CLASS+=AMateria.cpp
CLASS+=Ice.cpp
CLASS+=Cure.cpp
CLASS+=Character.cpp
HEAD:=$(CLASS:.cpp=.hpp)
HEAD+=ICharacter.hpp
HEAD+=IMateriaSource.hpp
SRCS:=main.cpp
OBJS:=$(SRCS:.cpp=.o)
OBJS+=$(CLASS:.cpp=.o)

CC=g++
CPPFLAGS=-std=c++98 -Wall -Werror -Wextra

.PHONY: all clean fclean re

all : $(NAME)

$(NAME) : $(OBJS) $(HEAD)
	$(CC) $(CPPFLAGS) $(OBJS) -o $@

%.o : %.cpp $(HEAD)
	$(CC) $(CPPFLAGS) $< -c -o $@

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all
