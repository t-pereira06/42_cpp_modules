/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 09:38:39 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/12/27 11:47:09 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"
/* Orthodox Canonical Form */
BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &copy)
{
	this->db.clear();
	this->db = copy.db;
}

BitcoinExchange	&BitcoinExchange::operator=(BitcoinExchange const &copy)
{
	if (this != &copy)
	{
		this->db.clear();
		this->db = copy.db;
	}
	return (*this);
}
/* ----------------------------------------------------------- */

/* Member Functions */

void	BitcoinExchange::fileToDB()
{
	dbFile.open("data.csv");
	if (!dbFile)
	{
		std::cerr << "Could not open database file!" << std::endl;
		exit (1);
	}
	std::string	line;
	std::string	part1;
	std::string	part2;
	size_t	i;
	getline(dbFile, line);
	while (getline(dbFile, line))
	{
		i = line.find(",");
		part1 = line.substr(0, i);
		part2 = line.substr(i + 1);
		db.insert(std::pair<std::string, double>(part1, std::strtod(part2.c_str(), NULL)));
	}
	dbFile.close();
}

void	BitcoinExchange::parsingInputFile(std::string file)
{
	inputFile.open(file.c_str());
	if (!inputFile)
	{
		std::cerr << "Error: could not open file." << std::endl;
		exit (1);
	}
	std::string	line;
	std::string	date;
	std::string value;
	size_t	i;
	getline(inputFile, line);
	while (getline(inputFile, line))
	{
		while (1)
		{
			i = line.find("|");
			if (i == std::string::npos || i == line.size() - 1)
			{
				std::cerr << "Error: bad input => " << line << std::endl;
				break;
			}
			date = line.substr(0, i - 1);
			value = line.substr(i + 2);
			if (!checkIfDateCorrect(date))
			{
				std::cerr << "Error: bad date => " << date << std::endl;
				break;
			}
			if (!checkValue(std::strtod(value.c_str(), NULL), value))
				break;
			execute(date, value);
			break;
		}

	}
}


/* Date verifications */
int	BitcoinExchange::checkIfDateCorrect(const std::string& checkDate)
{
	std::string date1 = "2009-01-02";
	if (!correctDateFormat(checkDate))
		return 0;
	if ((checkDate < date1))
		return 0; // checkDate is before date1
	else if (checkDate > date1)
		return 1; // checkDate is after date1
	return 1;
}

int	BitcoinExchange::checkIfIsDigit(std::string string)
{
	for (size_t i = 0; i < string.length();i++)
	{
		if (!isdigit(string[i]))
			return 0;
	}
	return 1;
}

int	BitcoinExchange::correctDateFormat(const std::string& checkDate)
{
	size_t	i;
	std::string	year;
	std::string	month;
	std::string day;
	i = checkDate.find("-");
	if (i == std::string::npos)
		return 0;
	year = checkDate.substr(0, i);
	month = checkDate.substr(i + 1, (checkDate.find("-", i + 1) - (i + 1)));
	i = checkDate.find("-", i + 1);
	if (i == std::string::npos)
		return 0;
	day = checkDate.substr(i + 1);
	if (!checkIfIsDigit(year) || !checkIfIsDigit(month) || !checkIfIsDigit(day))
		return 0;
	if (year.size() != 4 || month.size() != 2 || day.size() != 2)
		return 0;
	if (atoi(month.c_str()) < 1 || atoi(month.c_str()) > 12)
		return 0;
	if (!checkDay(atoi(day.c_str()), atoi(month.c_str()), atoi(year.c_str())))
		return 0;
	return 1;
}

int	BitcoinExchange::checkDay(int day, int month, int year)
{
	if (month == 4 || month == 6 || month == 9 || month == 30)
		if (day < 1 || day > 30)
			return 0;
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8
		|| month == 10 || month == 12)
		if (day < 1 || day > 31)
			return 0;
	if (month == 2)
	{
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		{
			if (day < 1 || day > 29)
				return 0;
		}
		else
		{
			if (day < 1 || day > 28)
				return 0;
		}
	}
	return 1;
}
/* ----------------------------------------------------------- */

/* Value verifications */
int		BitcoinExchange::checkValue(double value, std::string valueString)
{
	for(size_t i = 0; i < valueString.size();i++)
	{
		size_t a = 0;
		a = valueString.find(".");
		a = valueString.find(".", a + 2);
		if (a != std::string::npos)
		{
			std::cout << "Error: bad input." << std::endl;
			return 0;
		}
	}
	if (value < 0)
	{
		std::cout << "Error: not a positive number." << std::endl;
		return 0;
	}
	if (value > 1000)
	{
		std::cout << "Error: too large a number." << std::endl;
		return 0;
	}
	return 1;
}
/* ----------------------------------------------------------- */

void	BitcoinExchange::execute(std::string date, std::string value)
{
	double valueConverted = std::strtod(value.c_str(), NULL);
	std::cout << date << " => " << value << " = ";
	double foundValue = 0;
	std::map<std::string,double>::iterator it;
	for (it = db.begin(); it != db.end();it++)
	{
		if ((date < it->first))
		{
			--it;
			foundValue = it->second;
			break;
		}
	}
	if (it == db.end())
	{
		--it;
		foundValue = it->second;
	}
	double calculation;
	calculation = foundValue * valueConverted;
	std::cout << calculation << std::endl;
}

/* ----------------------------------------------------------- */
