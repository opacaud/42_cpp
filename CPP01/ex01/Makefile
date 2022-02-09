# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/13 14:24:31 by opacaud           #+#    #+#              #
#    Updated: 2022/01/13 14:24:31 by opacaud          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		zombie

OBJ_DIR =	obj

CXX =		c++

CFLAGS =	-Wall -Wextra -Werror -std=c++98

DEPFLAGS =	-MMD -MP

SRC =		main.cpp Zombie.cpp ZombieHorde.cpp

OBJ =		${addprefix ${OBJ_DIR}/,${SRC:.cpp=.o}}

DEP =		${OBJ:.o=.d}

all:		${NAME}

${NAME}:	${OBJ}
			${CXX} ${CFLAGS} ${DEPFLAGS} ${OBJ} -o ${NAME}

${OBJ_DIR}/%.o:%.cpp
			@mkdir -p ${@D}
			${CXX} ${CFLAGS} ${DEPFLAGS} -c $< -o $@

clean:
			rm -rf ${OBJ_DIR}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY :	all clean fclean re

-include	${DEP}
