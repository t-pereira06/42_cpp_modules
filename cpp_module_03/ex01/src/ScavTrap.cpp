/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:35:34 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/10 10:37:43 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

/*Orthodox Canonical Form*/
ScavTrap::ScavTrap() : ClapTrap("Default")
{
	std::cout << "ScavTrap " << this->_name << " was created" << std::endl;
	this->_name = "Default";
	this->_health = 100;
	this->_energy = 50;
	this->_ad = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_name << " was destroyed!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &copy) : ClapTrap(copy)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &copy)
{
	std::cout << "ScavTrap copy assigment operator called" << std::endl;
	if (this != &copy)
	{
		this->_name = copy._name;
		this->_health = copy._health;
		this->_energy = copy._energy;
		this->_ad = copy._ad;
	}
	return (*this);
}
/*-------------------------------------------------------*/

/*Constructors*/
ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap " << this->_name << " was created" << std::endl;
	this->_name = name;
	this->_health = 100;
	this->_energy = 50;
	this->_ad = 20;
}
/*-------------------------------------------------------*/

/*Member Functions*/

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << "is now in Gate keeper mode.";
}
