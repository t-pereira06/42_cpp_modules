/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:04:00 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/10/25 09:42:33 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	(void)argv;
	if (argc != 1)
	{
		std::cout << "Run the program without arguments!" << std::endl;
		return (0);
	}
	Harl harl;

	std::cout << "Debug Message from Harl: " << std::endl;
	harl.complain("debug");
	std::cout << std::endl;
	std::cout << "Info Message from Harl: " << std::endl;
	harl.complain("info");
	std::cout << std::endl;
	std::cout << "Warning Message from Harl: " << std::endl;
	harl.complain("warning");
	std::cout << std::endl;
	std::cout << "Error Message from Harl: " << std::endl;
	harl.complain("error");
	std::cout << std::endl;
}
