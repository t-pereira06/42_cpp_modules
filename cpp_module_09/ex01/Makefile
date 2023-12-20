# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsodre-p <tsodre-p@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/20 16:25:02 by tsodre-p          #+#    #+#              #
#    Updated: 2023/12/20 16:25:42 by tsodre-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = RPN
CXX = c++ -g
RM = rm -rf
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC_DIR		=	src/
OBJ_DIR		=	obj/
INC_DIR		=	includes/

RESET		=	\033[0m
GREEN		=	\033[32m
YELLOW		=	\033[33m
BLUE		=	\033[34m
RED			=	\033[31m
UP			=	\033[A
CUT			=	\033[K

SRC_FILES = main.cpp RPN.cpp
OBJ_FILES	= $(SRC_FILES:.cpp=.o)

SRC			=	$(addprefix $(SRC_DIR), $(SRC_FILES))
OBJ			=	$(addprefix $(OBJ_DIR), $(OBJ_FILES))

all: $(NAME)

#compiling executable
$(NAME): $(OBJ)
	@echo "$(YELLOW)Compiling [$(NAME)]...$(RESET)"
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	@echo "$(GREEN)Finished [$(NAME)]$(RESET)"

#compiling objects
$(OBJ_DIR)%.o:$(SRC_DIR)%.cpp
	@mkdir -p $(OBJ_DIR)
	@echo "$(YELLOW)Compiling [$@]...$(RESET)"
	@$(CXX) $(CXXFLAGS) -I $(INC_DIR) -o $@ -c $<
	@printf "$(UP)$(CUT)"
	@echo "$(GREEN)Finished [$@]$(RESET)"
	@printf "$(UP)$(CUT)"

#deleting objects
clean:
	@if [ -d "$(OBJ_DIR)" ]; then \
	rm -rf $(OBJ_DIR); \
	echo "$(BLUE)Deleting all objects from /RPN...$(RESET)"; else \
	echo "No objects to remove from /RPN."; \
	fi;

#deleting executable and objects
fclean: clean
	@if [ -f "$(NAME)" ]; then \
	rm -f $(NAME); \
	echo "$(BLUE)Deleting $(NAME) from /RPN...$(RESET)"; else \
	echo "No Executable to remove from /RPN."; \
	fi;

re: clean all
