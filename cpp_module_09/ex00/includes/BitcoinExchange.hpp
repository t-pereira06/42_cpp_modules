/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 09:17:44 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/12/19 15:05:41 by tsodre-p         ###   ########.fr       */
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
		int		checkDate(const std::string& checkDate);
		void	fileToDB();
		int		checkIfDataCorrect(std::string date);
		void	parsingInputFile(std::string file);
		/* ----------------------- */

};

#endif
