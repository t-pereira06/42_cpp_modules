/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 09:35:08 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/30 12:23:00 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <limits>
#include <iomanip>

class ScalarConverter
{
	private:
		/* Orthodox Canonical Form */
		ScalarConverter();
		~ScalarConverter();
		ScalarConverter(ScalarConverter const &copy);
		ScalarConverter	&operator=(ScalarConverter const &copy);
		/* ----------------------- */
	public:
		//Checking
		static bool	isChar(std::string &input);
		static bool	isInt(std::string &nput);
		static bool	isFloat(std::string &input);
		static bool	isDouble(std::string &input);
		static bool	isPseudo(std::string &input);

		//Printing
		static void	printChar(char a, std::string &input);
		static void	printInt(int a, std::string &input);
		static void	printFloat(float a, std::string &input);
		static void	printDouble(double a, std::string &input);
		static void	printPseudo(std::string &input);

		//Controlling function
		static void	printController(long double num, std::string &input);
		static void	convert(std::string &input);
		static bool	checkOverflow(std::string &input, char type);
};

#endif
