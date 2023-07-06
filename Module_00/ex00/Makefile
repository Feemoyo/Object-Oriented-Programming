# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/28 17:38:04 by fmoreira          #+#    #+#              #
#    Updated: 2023/06/28 18:02:48 by fmoreira         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= megaphone

CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98

SRCS		= ./megaphone.cpp
OBJ_PATH	= ./obj/
OBJ			= $(addprefix $(OBJ_PATH), $(notdir $(SRCS:.cpp=.o)))

$(OBJ_PATH)%.o:	./%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

$(OBJ): | $(OBJ_PATH)

$(OBJ_PATH):
	mkdir $(OBJ_PATH)

clean:
	$(RM) -r $(OBJ_PATH)

fclean: clean
	$(RM) -r $(NAME)

re: fclean all

.PHONY: all clean fclean all
