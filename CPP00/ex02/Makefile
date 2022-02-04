# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/03 15:26:25 by opacaud           #+#    #+#              #
#    Updated: 2022/02/03 15:26:25 by opacaud          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		account

CC =		clang++

FLAGS =		-Wall -Wextra -Werror -std=c++98

SRC =		Account.cpp tests.cpp

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

re:			fclean all

.PHONY :	all clean fclean re
