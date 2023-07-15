# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/12 15:27:37 by fmoreira          #+#    #+#              #
#    Updated: 2023/07/15 15:09:30 by fmoreira         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= zombie

SRC			= ${wildcard *.cpp}
OBJ_PATH	= ./obj/

OBJ			= ${addprefix ${OBJ_PATH}, ${notdir ${SRC:.cpp=.o}}}

CXX			= c++

INCLUDES	= -I.

CXXFLAGS	= -Wall -Wextra -Werror -Wpedantic -std=c++98 -g3

VALGRIND 	= valgrind

VALFLAGS 	= --quiet \
			--show-error-list=yes \
			--show-leak-kinds=all \
			--track-origins=yes \
			--error-exitcode=42 \
			--exit-on-first-error=yes

DEL			= rm -rf

${OBJ_PATH}%.o: %.cpp
	${CXX} ${CXXFLAGS} -c $< -o $@

all: ${NAME}

${NAME}: ${OBJ}
	${CXX} ${CXXFLAGS} ${INCLUDES} ${OBJ} -o ${NAME}

${OBJ}: | ${OBJ_PATH}

${OBJ_PATH}:
	mkdir ${OBJ_PATH}

%.o: %.cpp
	${CXX} ${CXXFLAGS} ${INCLUDES} -c $< -o $@ 

clean:
	${DEL} ${OBJ_PATH}

fclean: clean
	${DEL} ${NAME}

re: fclean all

valgrind: ${NAME}
	${VALGRIND} ${VALFLAGS} ./${NAME}

.PHONY: all clean fclean re valgrind
