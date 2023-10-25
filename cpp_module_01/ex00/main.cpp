/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 09:51:00 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/10/25 09:35:40 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int argc, char **argv)
{
	(void)argv;
	if (argc != 1)
	{
		std::cout << "Run the program without arguments!" << std::endl;
		return (0);
	}
	std::string	ZombieName;
	std::string	ChumpName;

	Zombie	*zombie;

	std::cout << "Give a name to the zombie:" << std::endl;
	getline(std::cin, ZombieName);
	std::cout << "Give a name to the chump:" << std::endl;
	getline(std::cin, ChumpName);
	zombie = newZombie(ZombieName);
	zombie->announce();
	randomChump(ChumpName);
	delete zombie;
	return (0);
}
