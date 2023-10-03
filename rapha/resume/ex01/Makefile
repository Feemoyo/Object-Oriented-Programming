# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rapdos-s <rapdos-s@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/12 15:27:37 by fmoreira          #+#    #+#              #
#    Updated: 2023/10/01 13:52:16 by rapdos-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= PhoneBook

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

# Mesmo do arquivo anterior
.DEFAULT_GOAL = all

# Mesmo do arquivo anterior
$(OBJ_PATH)%.o:	./%.cpp | $(OBJ_PATH)
	${CXX} ${CXXFLAGS} -c $< -o $@

all: ${NAME}

${NAME}: ${OBJ}
	${CXX} ${CXXFLAGS} ${INCLUDES} ${OBJ} -o ${NAME}

# ${OBJ}: | ${OBJ_PATH}

# Mesmo do arquivo anterior
${OBJ_PATH}:
	mkdir -p ${OBJ_PATH}

# Removendo isso aqui pro Makefile não ficar confuso :3
# %.o: %.cpp
# 	${CXX} ${CXXFLAGS} ${INCLUDES} -c $< -o $@ 

clean:
	${DEL} ${OBJ_PATH}

fclean: clean
	${DEL} ${NAME}

re: fclean all

valgrind: ${NAME}
	${VALGRIND} ${VALFLAGS} ./${NAME} test.txt s1 "Hello World"

.PHONY: all clean fclean re valgrind
