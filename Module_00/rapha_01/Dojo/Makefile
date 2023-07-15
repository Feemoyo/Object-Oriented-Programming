NAME	 = phonebook

SRC		 = ${wildcard *.cpp}

OBJ		 = ${SRC:.cpp=.o}

DEP		 = ${OBJ:.o=.d}

CXX		 = c++

INCLUDES = -I.

CXXFLAGS = -Wall -Wextra -Werror -Wpedantic -std=c++98 -g3

DEPFLAGS = -MMD -MF

VALGRIND = valgrind

VALFLAGS = --quiet \
		   --show-error-list=yes \
		   --show-leak-kinds=all \
		   --track-origins=yes \
		   --error-exitcode=42 \
		   --exit-on-first-error=yes

DEL		 = rm -rf

all: ${NAME}

${NAME}: ${OBJ}
	${CXX} ${CXXFLAGS} ${INCLUDES} ${OBJ} -o ${NAME}

clean:
	${DEL} ${OBJ} ${DEP}

fclean: clean
	${DEL} ${NAME}

re: fclean all

%.o: %.cpp
	${CXX} ${CXXFLAGS} ${INCLUDES} -c $< -o $@ ${DEPFLAGS} ${@:.o=.d}

valgrind: ${NAME}
	${VALGRIND} ${VALFLAGS} ./${NAME}

-include ${DEP}

.PHONY: all clean fclean re valgrind
