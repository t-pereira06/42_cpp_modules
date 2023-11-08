/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:40:44 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/08 14:32:12 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

int	main(void)
{
	ClapTrap cracked("Cracked");
	ClapTrap def("Default");

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
