# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/19 10:38:49 by opacaud           #+#    #+#              #
#    Updated: 2022/01/19 10:38:49 by opacaud          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		animal

OBJ_DIR =	obj

CXX =		c++

CFLAGS =	-Wall -Wextra -Werror -std=c++98

DEPFLAGS =	-MMD -MP

SRC =		AAnimal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp main.cpp

OBJ =		${addprefix ${OBJ_DIR}/,${SRC:.cpp=.o}}

DEP =		${OBJ:.o=.d}

all:		${NAME}

${NAME}:	${OBJ}
			${CXX} ${CFLAGS} ${DEPFLAGS} ${OBJ} -o ${NAME}

${OBJ_DIR}/%.o:%.cpp
			@mkdir -p ${@D}
			${CXX} ${CFLAGS} ${DEPFLAGS} -c $< -o $@

clean:
			rm -f ${OBJ} ${DEP}
			@rm -r ${OBJ_DIR}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY :	all clean fclean re

-include	${DEP}
