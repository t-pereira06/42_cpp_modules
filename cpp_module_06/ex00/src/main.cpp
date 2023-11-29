/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:09:00 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/29 11:55:00 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.hpp"

int main(int argc, char **argv)
{
	std::string	literal(argv[1]);

	if (argc != 2)
	{
		std::cerr << "Error: Run the program with 2 arguments! ./convert <string>" << std::endl;
		return (0);
	}
	if (!ScalarConverter::isDouble(literal))
		std::cerr << "Is not double type!" << std::endl;
}
