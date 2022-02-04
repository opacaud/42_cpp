# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/13 14:25:19 by opacaud           #+#    #+#              #
#    Updated: 2022/01/13 14:25:19 by opacaud          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		unnecessaryviolence

CC =		c++

FLAGS =		-Wall -Wextra -Werror -std=c++98

SRC =		main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

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
