/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:38:14 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/10 15:18:54 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp"

/*Orthodox Canonical Form*/
DiamondTrap::DiamondTrap() : ClapTrap("Default")
{
	this->_name = "Default";
	ClapTrap::_name = "Default_clap_name";
	this->_health = FragTrap::_health;
	this->_energy = 50;
	this->_ad = FragTrap::_ad;
	std::cout << "DiamondTrap " << this->_name << " was created" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->_name << " was destroyed!" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &copy) : ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &copy)
{
	std::cout << "DiamondTrap copy assigment operator called" << std::endl;
	if (this != &copy)
	{
		this->_name = copy._name;
		ClapTrap::_name = copy._name + "_clap_name";
		this->_health = copy._health;
		this->_energy = copy._energy;
		this->_ad = copy._ad;
	}
	return (*this);
}
/*-------------------------------------------------------*/

/*Constructors*/
DiamondTrap::DiamondTrap(const std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	this->_name = name;
	ClapTrap::_name = name + "_clap_name";
	this->_health = FragTrap::_health;
	this->_energy = 50;
	this->_ad = FragTrap::_ad;
	std::cout << "DiamondTrap " << this->_name << " was created" << std::endl;
}
/*-------------------------------------------------------*/

/*Member Functions*/

void	DiamondTrap::whoAmI()
{
	std::cout << "My name is " << this->_name << " and I'm a DiamondTrap." << std::endl;
	std::cout << "ClapTrap name is " << ClapTrap::_name << std::endl;
}
