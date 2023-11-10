/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:40:44 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/10 11:33:37 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

int	main(void)
{
	FragTrap def;
	def.displayInfo();
	std::cout << std::endl;
	FragTrap cracked("Cracked");
	cracked.displayInfo();
	std::cout << std::endl;
	FragTrap a(cracked);
	a.displayInfo();
	std::cout << std::endl;
	a = def;
	a.displayInfo();
	def.highFivesGuys();
	cracked.highFivesGuys();
	a.highFivesGuys();
	std::cout << std::endl;

	return (0);
}
