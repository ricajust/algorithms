# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rda-silv <rda-silv@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 07:36:28 by rda-silv          #+#    #+#              #
#    Updated: 2022/11/09 22:17:08 by rda-silv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

##### SET VARIABLES #####
# NAME
NAME=algorithm

#COMPILE
CC=gcc

#FLAGS TO COMPILE
CC_FLAGS= -g -Wall -Wextra -Werror

#VALGRIND
VALGRIND=valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes \
       -q --tool=memcheck ./algorithm 2

#DIRECTORIES
SRC_DIR=source
OBJ_DIR=object

#SOURCE CODES
SRCS=main.c selection_sort.c list_handler.c

#GET ALL SOURCES FILES
SRC=$(addprefix $(SRC_DIR)/,$(SRCS))

#CONVERT .C IN .O
OBJ=$(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

##### COMPILATION AND LINKING #####
#START HERE!
all: $(NAME)

#LINKING .O FILES AND TRANSFORM IN BINARY (so_long), AND EXECUTE LIBFT :)
$(NAME): $(OBJ_DIR) $(OBJ)
	$(CC) $(CC_FLAGS) $(OBJ) -o $(NAME)

#CREATE .O FILES BY .C FILES (ONE BY ONE) - %:TAKES CORE NAME
#$@ TARGET NAME AND $< FIRST PRE_REQUISIT
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CC_FLAGS) -c $< -o $@

#CREATE OBJ_DIR (IF EXISTS, DO NOTHING)
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

#CLEANING (REMOVING .O DIRECTORY AND INSIDE LIBFT THE .O FILES)
clean:
	rm -rf $(OBJ_DIR)

#MAKE CLEANING AND DELETE BINARY FILE
fclean: clean
	rm -f $(NAME)

#SHORTCUT TO CLEAN ALL
re: fclean all

#VALGRIND
vg: re
	$(VALGRIND)

#SHORTCUT TO CLEAN ALL
.PHONY: all clean