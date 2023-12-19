/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 10:45:40 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/12/19 12:36:19 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"

int	main(int argc, char**argv)
{
	(void)argv;
	if (argc != 2)
	{
		std::cerr << "Run program like : ./btc <inputfile.txt>" << std::endl;
		return (0);
	}
	BitcoinExchange obj = BitcoinExchange();
	obj.fileToDB();
	obj.outputResult(argv[1]);
}
