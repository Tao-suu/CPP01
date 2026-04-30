# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbez--du <tbez--du@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/30 13:41:48 by tbez--du          #+#    #+#              #
#    Updated: 2026/04/30 16:21:54 by tbez--du         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		=	main.cpp
OBJ		=	$(SRC:.cpp=.o)
DEP		=	$(SRC:.cpp=.d)

CC		=	c++
CF		=	-Wall -Werror -Wextra -std=c++98

NAME	=	replace


all:		$(NAME)

-include $(DEP)
$(NAME):	$(OBJ)
	$(CC) $(CF) $(OBJ) -o $(NAME)

%.o:		%.cpp
	$(CC) $(CF) -c $< -o $@ -MMD -MP -MF $*.d

clean:
	rm -f $(OBJ)
	rm -f $(DEP)

fclean:		clean
	rm -f $(NAME)

re:			fclean all

.PHONY:	all clean fclean re
