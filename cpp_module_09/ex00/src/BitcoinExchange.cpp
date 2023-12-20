/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 09:38:39 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/12/20 12:39:00 by tsodre-p         ###   ########.fr       */
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
	/* std::map<std::string, double>::iterator it = this->db.begin();

	// Iterate through the map and print the elements
	while (it != this->db.end())
	{
		std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
		++it;
	} */
}

void	BitcoinExchange::parsingInputFile(std::string file)
{
	inputFile.open(file.c_str());
	if (!inputFile)
	{
		std::cerr << "Could not open input file!" << std::endl;
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
			if (i == std::string::npos)
			{
				std::cerr << "Error: bad input => " << line << std::endl;
				break;
			}
			date = line.substr(0, i - 1);
			value = line.substr(i + 1);
			if (!checkIfDateCorrect(date))
			{
				std::cerr << "Error: bad date => " << date << std::endl;
				break;
			}
			break;
		}

	}
}

int	BitcoinExchange::checkIfDateCorrect(const std::string& checkDate)
{
	std::string date1 = "2009-01-02";
	if (!correctDateFormat(checkDate))
		return -1;
	if (checkDate < date1)
		return -1; // checkDate is before date1
	else if (checkDate > date1)
		return 0; // checkDate is after date1

	/*
	CHECK IF THE DATE DOES NOT CORRESPOND ON THE DATABASE, THEN CHECK
	IF (DATEBEHIND < MYDATE && DATEAHEAD > MYDATE)
		RETURN DATEBEHIND*/
	return 0;
}

int	BitcoinExchange::checkIfIsDigit(std::string string)
{
	for (size_t i = 0; i < string.length();i++)
	{
		if (!isdigit(string[i]))
		{
			std::cout << "im here" << std::endl;
			return 0;
		}
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
		return 1;
	year = checkDate.substr(0, i);
	month = checkDate.substr(i + 1, (checkDate.find("-", i + 1) - (i + 1)));
	i = checkDate.find("-", i + 1);
	if (i == std::string::npos)
		return 1;
	day = checkDate.substr(i + 1);
	if (!checkIfIsDigit(year) || !checkIfIsDigit(month) || !checkIfIsDigit(day))
		return 1;
	if (year.size() != 4 || month.size() != 2 || day.size() != 2)
		return 1;
	if (atoi(month.c_str()) < 1 || atoi(month.c_str()) > 12)
		return 1;
	if (!checkday(day))
		return 1;
	return 0;
}

int	BitcoinExchange::checkDay(std::string day)
{

}
/* ----------------------------------------------------------- */
