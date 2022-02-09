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

OBJ_DIR =	obj

CXX =		c++

CFLAGS =	-Wall -Wextra -Werror -std=c++98

DEPFLAGS =	-MMD -MP

SRC =		main.cpp

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
			rm *.replace

re:			fclean all

.PHONY :	all clean fclean re

-include	${DEP}
