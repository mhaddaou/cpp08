# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/30 00:43:34 by mhaddaou          #+#    #+#              #
#    Updated: 2022/11/02 19:45:59 by mhaddaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = MutantStack
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp
HEADER = include/MutantStack.hpp
CC = c++
RM = rm -rf


%.o: %.cpp
	$(CC) $(FLAGS) -c -o $@ $<

OBJ = $(SRC:%.cpp=%.o)

all: ${NAME}

${NAME} : ${OBJ} ${HEADER}
	${CC} ${FLAGS} ${OBJ} -o ${NAME}

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME}

re : fclean all