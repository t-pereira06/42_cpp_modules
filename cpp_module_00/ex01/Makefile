# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/03 12:43:37 by tsodre-p          #+#    #+#              #
#    Updated: 2023/10/09 10:25:44 by tsodre-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
CC = c++
CFLAGS = -Wall -Wextra -Werror

all:
		c++ -g Contact.cpp PhoneBook.cpp main.cpp $(CFLAGS) -o $(NAME)

clean:
		rm -rf ./$(NAME)

re: clean all
