/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:40:44 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/10 12:42:29 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap def;
	def.displayInfo();
	std::cout << std::endl;

	DiamondTrap cracked("Cracked");
	cracked.displayInfo();
	std::cout << std::endl;

	DiamondTrap a("God");
	a.displayInfo();
	std::cout << std::endl;

	a.displayInfo();
	std::cout << std::endl;
	a.attack("Cracked");
	cracked.takeDamage(30);
	std::cout << std::endl;
	a.displayInfo();
	std::cout << std::endl;
	cracked.displayInfo();
	std::cout << std::endl;

	return (0);
}
