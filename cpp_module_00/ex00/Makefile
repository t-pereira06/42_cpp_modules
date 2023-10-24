# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/03 11:11:41 by tsodre-p          #+#    #+#              #
#    Updated: 2023/10/24 14:43:56 by tsodre-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
CXX = c++
RM = rm -rf
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

FUNCS = megaphone.cpp
OBJ = $(FUNCS:%.cpp=%.o)

GREEN = \033[0;32m

all: $(NAME)

$(NAME): $(OBJ)
		$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
		@echo "$(GREEN) [ Conpiled: $(NAME) ] "
		@echo "$(GREEN) [ Generated: $(NAME) ] "

clean:
		$(RM) $(OBJ)
		@echo "$(GREEN) [ Object files cleaned ] "

fclean:
		$(RM) $(OBJ)
		$(RM) $(NAME)
		@echo "$(GREEN) [ Clean Done ] "

re: clean all
