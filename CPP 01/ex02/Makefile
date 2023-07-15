#############################################

NAME := zombie

#############################################

#############################################

CC          := c++
CFLAGS      := -Wall -Wextra -Werror -g3 -std=c++98

#############################################

RM          := rm -f
MAKEFLAGS   += --no-print-directory
DIR_DUP     = mkdir -p $(@D)

#############################################

all: $(NAME)

$(NAME): 
	@ $(CC) $(FLAGS) main.cpp -o $(NAME)
	$(info CREATED $(NAME))

clean:
	@$(RM) $(NAME)

fclean:
	@$(RM) $(NAME)

re: clean all

#############################################

.PHONY: clean fclean re

.SILENT:

#############################################