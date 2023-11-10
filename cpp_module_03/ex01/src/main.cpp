/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:40:44 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/10 10:36:39 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

int	main(void)
{
	ScavTrap cracked("Cracked");
	ScavTrap def;

	cracked.attack("Default");
	cracked.displayInfo();
	std::cout << std::endl;
	def.displayInfo();
	std::cout << std::endl;

	def.takeDamage(5);
	cracked.displayInfo();
	std::cout << std::endl;
	def.displayInfo();
	std::cout << std::endl;

	def.beRepaired(1);
	cracked.displayInfo();
	std::cout << std::endl;
	def.displayInfo();
	std::cout << std::endl;
	return (0);
}
