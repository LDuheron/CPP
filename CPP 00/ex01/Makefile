#############################################

NAME := PhoneBook

#############################################

SRC := Contact.cpp		\
		Phonebook.cpp	\
		Main.cpp		\

OBJ	:=	$(SRC:.cpp=.o)

#############################################

CC          := c++
CPPFLAGS      := -Wall -Wextra -Werror -std=c++98

#############################################

RM          := rm -f
MAKEFLAGS   += --no-print-directory


#############################################

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
	$(info CREATED $(NAME))

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

#############################################

.PHONY: all clean fclean re

.SILENT:

#############################################
