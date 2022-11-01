# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/30 00:43:34 by mhaddaou          #+#    #+#              #
#    Updated: 2022/11/01 03:05:26 by mhaddaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Span
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = src/main.cpp src/Span.cpp
HEADER = include/Span.hpp
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