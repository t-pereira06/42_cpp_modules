/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:40:44 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/10 11:19:46 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

int	main(void)
{
	ScavTrap def;
	def.displayInfo();
	std::cout << std::endl;
	ScavTrap cracked("Cracked");
	cracked.displayInfo();
	std::cout << std::endl;
	ScavTrap a(cracked);
	a.displayInfo();
	std::cout << std::endl;
	a = def;
	a.displayInfo();
	def.guardGate();
	cracked.guardGate();
	a.guardGate();
	std::cout << std::endl;

	return (0);
}
