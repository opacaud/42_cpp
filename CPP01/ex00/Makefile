# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/13 14:23:56 by opacaud           #+#    #+#              #
#    Updated: 2022/01/13 14:23:56 by opacaud          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		zombie

CC =		c++

FLAGS =		-Wall -Wextra -Werror -std=c++98

SRC =		main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

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
