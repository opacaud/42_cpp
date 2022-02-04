# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/13 14:25:35 by opacaud           #+#    #+#              #
#    Updated: 2022/01/13 14:25:35 by opacaud          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		replace

CC =		c++

FLAGS =		-Wall -Wextra -Werror -std=c++98

SRC =		main.cpp

OBJ =		${SRC:.cpp=.o}

all:		${NAME}

${NAME}:	${OBJ}
			${CC} ${FLAGS} ${OBJ} -o ${NAME}

.cpp.o:
			${CC} ${FLAGS} -c $< -o $@

clean:
			rm -f ${OBJ}

fclean:		clean
			rm -f ${NAME}
			rm *.replace

re:			fclean all

.PHONY :	all clean fclean re
