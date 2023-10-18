/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 09:51:00 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/10/18 10:59:03 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
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
