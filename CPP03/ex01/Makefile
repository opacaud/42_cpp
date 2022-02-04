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

NAME =		scavtrap

CC =		c++

FLAGS =		-Wall -Wextra -Werror -std=c++98

SRC =		ClapTrap.cpp ScavTrap.cpp main.cpp

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
