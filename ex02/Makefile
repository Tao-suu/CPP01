# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbez--du <tbez--du@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/07 11:38:14 by tbez--du          #+#    #+#              #
#    Updated: 2026/04/07 12:41:03 by tbez--du         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		=	main.cpp
OBJ		=	$(SRC:.cpp=.o)
DEP		=	$(SRC:.cpp=.d)

NAME	=	"reff"

CC		=	clang++
CFLAGS	=	-Wall -Werror -Wextra -std=c++98

all:		$(NAME)

-include $(DEP)
$(NAME):	$(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@printf "%s created !!\n" $(NAME)

%.o:		%.cpp
	@$(CC) $(CFLAGS) -c $< -o $@ -MMD -MP -MF $*.d
	@printf "%s compiled !!\n" $@

clean:
	rm -rf $(OBJ)
	rm -rf $(DEP)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
