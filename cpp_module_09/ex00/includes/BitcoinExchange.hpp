/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 09:17:44 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/12/20 15:41:41 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#pragma once

#include <vector>
#include <map>
#include <iostream>
#include <string.h>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
#include <typeinfo>

class BitcoinExchange
{
	private:
		std::map<std::string, double> db;
		std::ifstream	dbFile;
		std::ifstream	inputFile;
	public:
		/* Orthodox Canonical Form */
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(BitcoinExchange const &copy);
		BitcoinExchange	&operator=(BitcoinExchange const &copy);
		/* ----------------------- */

		/* Member Functions */
		void	fileToDB();

		/* Checks for the input file */
		int		checkDate(const std::string& checkDate);
		int		checkValue(double value, std::string valueString);
		int		correctDateFormat(const std::string& checkDate);
		int		checkDay(int day, int month, int year);
		int		checkIfIsDigit(std::string string);
		int		checkIfDateCorrect(const std::string& checkDate);
		void	parsingInputFile(std::string file);
		/* ----------------------- */
		void	execute(std::string date, std::string value);

};

#endif
