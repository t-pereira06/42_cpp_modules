/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 09:38:39 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/12/19 15:46:24 by tsodre-p         ###   ########.fr       */
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
		part2 = line.substr(i);
		db.insert(std::pair<std::string, double>(part1, std::strtod(part2.c_str(), NULL)));
	}
	dbFile.close();
}

void	BitcoinExchange::parsingInputFile(std::string file)
{
	inputFile.open(file);
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
		i = line.find("|");
		if (i == std::string::npos)
		{
			std::cerr << "Error: bad input => " << line << std::endl;
			break;
		}
		date = line.substr(0, i);
		value = line.substr(i);
		if (!checkIfDataCorrect(date))
		{
			std::cerr << "Error: bad date => " << date << std::endl;
			break;
		}
	}
}

int	BitcoinExchange::checkDate(const std::string& checkDate)
{
	std::string date1 = "2009-01-02";
	if (checkDate < date1)
		return -1; // checkDate is before date1
	else if (checkDate > date1)
		return 1; // checkDate is after date1
	else
		return 0; // dates are equal

	/*
	CHECK IF THE DATE DOES NOT CORRESPOND ON THE DATABASE, THEN CHECK
	IF (DATEBEHIND < MYDATE && DATEAHEAD > MYDATE)
		RETURN DATEBEHIND*/
}
/* ----------------------------------------------------------- */
