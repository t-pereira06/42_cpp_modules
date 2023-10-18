/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:04:25 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/10/18 14:49:44 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

static int	CheckIfOnlyDigit(std::string command)
{
	for (int i = 0; i < command.size(); i++)
	{
		if (!isdigit(command[i]))
		{
			return (1);
		}
	}
	return (0);
}

int	main(void)
{
	int	numberOfZombies;
	std::string	zombiesName;
	std::string	input;

	Zombie	*horde;
	std::cout << "How many zombies you want to create? ";
	getline(std::cin, input);
	if (CheckIfOnlyDigit(input) || atoi(input.c_str()) < 1)
	{
		std::cout << "It Needs to be a number..." << std::endl;
		exit(1);
	}
	numberOfZombies = atoi(input.c_str());
	std::cout << "What's the name you want to give them? ";
	getline(std::cin, input);
	zombiesName = input;
	horde = zombieHorde(numberOfZombies, zombiesName);
	for (int i = 0; i < numberOfZombies; i++)
		horde[i].announce();
	delete [] horde;
	return (0);
}
