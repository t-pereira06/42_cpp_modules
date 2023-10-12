# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/03 12:43:37 by tsodre-p          #+#    #+#              #
#    Updated: 2023/10/12 12:21:57 by tsodre-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
C++ = c++
RM = rm -rf
#AR = ar rcs
CFLAGS = -Wall -Wextra -Werror -std=c++98

FUNCS = Contact.cpp PhoneBook.cpp main.cpp
OBJ = $(FUNCS:%.cpp=%.o)

GREEN = \033[0;32m

all: $(NAME)

$(NAME): $(OBJ)
		$(C++) $(CFLAGS) $(OBJ) -o $(NAME)
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
