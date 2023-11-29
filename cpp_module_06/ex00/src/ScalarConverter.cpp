/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 09:38:41 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/29 11:57:31 by tsodre-p         ###   ########.fr       */
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
	if (input[0] >= 49 && input[0] <= 57)
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
