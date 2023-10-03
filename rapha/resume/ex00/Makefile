# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rapdos-s <rapdos-s@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/28 17:38:04 by fmoreira          #+#    #+#              #
#    Updated: 2023/10/02 18:16:25 by rapdos-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Sei que tem algumas coisas que você corrigiu depois, só fui seguindo :3

NAME		= megaphone

# Variável padrão para linguagem C++, CC é o padrão para C
CXX			= c++
# O mesmo aqui, mas você pode escolher entre CXXFLAGS e CPPFLAGS
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

# Você pode usar wildcards aqui se quiser deixar o Makefile genérico
# SRCS		= $(wildcard *.cpp)
SRCS		= ./megaphone.cpp
OBJ_PATH	= ./obj/
OBJ			= $(addprefix $(OBJ_PATH), $(notdir $(SRCS:.cpp=.o)))

# Faltou criar essa variável, sem isso o Makefile gera uma padrão "rm -f", mas
# eu particularmente não confio
RM			= rm -rf
# É uma boa prática colocar o all como primeiro ou deixar explícito que all é o
# caminho padrão para o make sem argumentos
.DEFAULT_GOAL = all

duck:
	@echo quack

$(OBJ_PATH)%.o:	./%.cpp | $(OBJ_PATH)
	$(CXX) $(CXXFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $@

# Você pode simplificar colocando essa dependência na criação de objetos
# $(OBJ): | $(OBJ_PATH)

# -p é pra não dar erro se a pasta já existir
$(OBJ_PATH):
	mkdir -p $(OBJ_PATH)

# mandei o -r pra criação da variável
clean:
	$(RM) $(OBJ_PATH)

fclean: clean
	$(RM) $(NAME)

re: fclean all

# removi o all repetido e coloquei o re
.PHONY: all clean fclean re
