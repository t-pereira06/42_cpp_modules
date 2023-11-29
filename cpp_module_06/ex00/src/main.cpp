/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:09:00 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/29 16:57:37 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.hpp"

int main(int argc, char **argv)
{
	std::string	literal(argv[1]);

	if (argc != 2)
	{
		std::cerr << "Error: Run the program with 2 arguments! ./convert <something>" << std::endl;
		return (0);
	}
	ScalarConverter::convert(literal);
}
