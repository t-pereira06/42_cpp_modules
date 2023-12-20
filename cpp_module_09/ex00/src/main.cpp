/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 10:45:40 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/12/20 14:19:57 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"

int	main(int argc, char**argv)
{
	(void)argv;
	if (argc != 2)
	{
		std::cerr << "Error: could not open file." << std::endl;
		return (0);
	}
	BitcoinExchange obj = BitcoinExchange();
	obj.fileToDB();
	obj.parsingInputFile(argv[1]);
}
