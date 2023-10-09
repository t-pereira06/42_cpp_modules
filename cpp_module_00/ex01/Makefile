# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/03 12:43:37 by tsodre-p          #+#    #+#              #
#    Updated: 2023/10/09 15:02:10 by tsodre-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
CC = c++
RM = rm -rf
AR = ar rcs
CFLAGS = -Wall -Wextra -Werror

FUNCS = Contact.cpp PhoneBook.cpp main.cpp
OBJ = $(FUNCS:%.cpp=%.o)

GREEN = \033[0;32m

all: $(NAME)

$(NAME): $(OBJ)
		@echo "$(GREEN) [ Conpiled: $(NAME) ] "
		@echo "$(GREEN) [ Generated: $(NAME) ] "
		c++ -g $(CFLAGS) $(OBJ) -o $(NAME)

clean:
		$(RM) $(OBJ)
		@echo "$(GREEN) [ Object files cleaned ] "

fclean:
		$(RM) $(OBJ)
		$(RM) $(NAME)
		@echo "$(GREEN) [ Clean Done ] "

re: clean all
