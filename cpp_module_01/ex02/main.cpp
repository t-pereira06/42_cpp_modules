/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:52:38 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/10/25 09:36:49 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include <locale.h>
#include <stdio.h>
#include <iomanip>

int	main(int argc, char **argv)
{
	(void)argv;
	if (argc != 1)
	{
		std::cout << "Run the program without arguments!" << std::endl;
		return (0);
	}
	std::string		string = "HI THIS IS BRAIN";
	std::string*	stringPTR =  &string;
	std::string&	stringREF = string;

	std::cout << "The memory address of the string variable: ";
	std::cout << &string << std::endl;
	std::cout << "The memory address held by stringPTR: ";
	std::cout << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF: ";
	std::cout << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "The value of the string variable: ";
	std::cout << string << std::endl;
	std::cout << "The value pointed to by stringPTR: ";
	std::cout << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF: ";
	std::cout << stringREF << std::endl;
	return (0);
}
