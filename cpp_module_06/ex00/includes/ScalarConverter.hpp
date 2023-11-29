/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 09:35:08 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/29 12:44:07 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string.h>
#include <limits.h>
#include <iomanip>
#include <stdlib.h>

class ScalarConverter
{
	public:
		/* Orthodox Canonical Form */
		ScalarConverter();
		~ScalarConverter();
		ScalarConverter(ScalarConverter const &copy);
		ScalarConverter	&operator=(ScalarConverter const &copy);
		/* ----------------------- */

		//Checking
		static bool	isChar(std::string &input);
		static bool	isInt(std::string &nput);
		static bool	isFloat(std::string &input);
		static bool	isDouble(std::string &input);
		static bool	isPseudo(std::string &input);

		//Printing
		static void	printChar(char a);
		static void	printInt(int a);
		static void	printFloat(float a, std::string &input);
		static void	printDouble(double a, std::string &input);
		static void	printPseudo(std::string &input);

		//Controlling function
		static void	printController(long double num, std::string &input);
		static void	convert(std::string &input);
};

#endif
