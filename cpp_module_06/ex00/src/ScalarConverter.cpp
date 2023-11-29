/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 09:38:41 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/29 14:13:39 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.hpp"

/* Orthodox Canonical Form */
ScalarConverter::ScalarConverter() {}

ScalarConverter::~ScalarConverter() {}

ScalarConverter::ScalarConverter(ScalarConverter const &copy)
{
	(void)copy;
}

ScalarConverter	&ScalarConverter::operator=(ScalarConverter const &copy)
{
	(void)copy;
	return (*this);
}
/* ----------------------------------------------------------- */

/*Checking Functions*/
bool	ScalarConverter::isChar(std::string &input)
{
	if(input.size() > 1)
		return (false);
	if (input[0] >= 48 && input[0] <= 57)
		return (false);
	if (input[0] < 33 || input[0] > 126)
		return (false);
	return (true);
}

bool	ScalarConverter::isInt(std::string &input)
{
	for(size_t	i = 0; i < input.size(); i++)
	{
		if (i == 0 && input[0] == '-')
			continue;
		if (!isdigit(input[i]))
			return (false);
	}
	return (true);
}

bool	ScalarConverter::isFloat(std::string &input)
{
	if (input[input.size() - 1] != 'f')
		return(false);
	if (input.find('.') == std::string::npos)
		return (false);
	if (input.find_first_of('.') != input.find_last_of('.'))
		return(false);
	for(size_t	i = 0; i < input.size() - 1; i++)
	{
		if (i == 0 && input[0] == '-')
			continue;
		if (input[i] == '.')
			continue;
		if (!isdigit(input[i]))
			return (false);
	}
	return (true);
}

bool	ScalarConverter::isDouble(std::string &input)
{
	if (input.find('.') == std::string::npos)
		return (false);
	if (input.find_first_of('.') != input.find_last_of('.'))
		return(false);
	for(size_t	i = 0; i < input.size(); i++)
	{
		if (i == 0 && input[0] == '-')
			continue;
		if (input[i] == '.')
			continue;
		if (!isdigit(input[i]))
			return (false);
	}
	return (true);
}

bool	ScalarConverter::isPseudo(std::string &input)
{
	if (input == "-inff" || input == "+inff" || input == "-inf" || input == "+inf" || input == "nan")
		return (true);
	return (false);
}

/* ----------------------------------------------------------- */

/*Printing functions*/

void	ScalarConverter::printChar(char a)
{
	if (std::isprint(a))
		std::cout << "char: '" << a << "'"<< std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
}

void	ScalarConverter::printInt(int a)
{
	std::cout << "int: " << a << std::endl;
}

void	ScalarConverter::printFloat(float a, std::string &input)
{
	(void)input;
	if ((a - (int)a) == 0)
		std::cout << "float: " << a << ".0f" << std::endl;
	/* if ((input[input.find(".") + 1] == '0' && (input[input.find(".") + 2] == 'f' || input[input.find(".") + 2] == '0' || input[input.find(".") + 2] == '\0'))
		|| input.find(".") == std::string::npos)
		std::cout << "float: " << a << ".0f" << std::endl; */
	else
		std::cout << "float: " << a << "f" << std::endl;
}

void	ScalarConverter::printDouble(double a, std::string &input)
{
	(void)input;
	if ((a-(int)a)==0)
		std::cout << "double: " << a << ".0" << std::endl;
	/* if ((input[input.find(".") + 1] == '0' && (input[input.find(".") + 2] == 'f' || input[input.find(".") + 2] == '0' || input[input.find(".") + 2] == '\0'))
		|| input.find(".") == std::string::npos)
		std::cout << "double: " << a << ".0" << std::endl; */
	else
		std::cout << "double: " << a << std::endl;
}

/* void	ScalarConverter::printPseudo(std::string &input)
{

} */

/* ----------------------------------------------------------- */

void	ScalarConverter::printController(long double a, std::string &input)
{
	printChar(static_cast<char>(a));
	printInt(static_cast<int>(a));
	printFloat(static_cast<float>(a), input);
	printDouble(static_cast<double>(a), input);
}

void	ScalarConverter::convert(std::string &input)
{
	if (isChar(input))
		printController(input[0], input);
	else if (isInt(input))
		printController(std::strtod(input.c_str(), NULL), input);
	else if (isFloat(input))
		printController(std::strtod(input.c_str(), NULL), input);
	else if (isDouble(input))
		printController(std::strtod(input.c_str(), NULL), input);
	/* else if (isPseudo(input))
		printPseudo(input); */
	else
		std::cerr << "Invalid type!" << std::endl;
}
