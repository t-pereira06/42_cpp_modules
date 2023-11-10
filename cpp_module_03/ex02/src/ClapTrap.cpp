/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:40:42 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/10 10:33:18 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

/* Orthodox Canonical Form */
ClapTrap::ClapTrap() : _name("Default"), _health(10), _energy(10), _ad(0)
{
	std::cout << "ClapTrap " << this->_name << " was created" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << " was destroyed!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	if (this != &copy)
	{
		this->_name = copy._name;
		this->_health = copy._health;
		this->_energy = copy._energy;
		this->_ad = copy._ad;
	}
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &copy)
{
	std::cout << "ClapTrap copy assigment operator called" << std::endl;
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

ClapTrap::ClapTrap(const std::string name) : _name(name), _health(10), _energy(10), _ad(0)
{
	std::cout << "ClapTrap " << this->_name << " was created" << std::endl;
}

/*-------------------------------------------------------*/

/*Member Functions*/

void	ClapTrap::attack(const std::string& target)
{
	if (this->_energy == 0)
	{
		std::cout << "ClapTrap [" << this->_name << "] : " << " ran out of energy. What a shame..." << std::endl;
		return ;
	}
	if (this->_health == 0)
	{
		std::cout << "ClapTrap [" << this->_name << "] : " << " is already dead." << std::endl;
		return ;
	}
	std::cout << "ClapTrap [" << this->_name << "]" << " attacks " << target << ", causing " << this->_ad << " points of damage!" << std::endl;
	this->_energy -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_health == 0)
	{
		std::cout << "ClapTrap [" << this->_name << "] : " << "Attacking someone who's already dead? Please..." << std::endl;
		return ;
	}
	if (amount >= this->_health)
	{
		this->_health = 0;
		std::cout << "ClapTrap [" << this->_name << "]" << " took " << amount << " points of damage!" << std::endl;
		std::cout << "ClapTrap [" << this->_name << "] : " << "Wow, what a powerful attack! I'm dead!" << std::endl;
		return ;
	}
	this->_health -= amount;
	std::cout << "ClapTrap [" << this->_name << "]" << " took " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_health == 0)
	{
		std::cout << "ClapTrap [" << this->_name << "] : " << "Wish they could repair dead ClapTraps..." << std::endl;
		return ;
	}
	if (this->_energy == 0)
	{
		std::cout << "ClapTrap [" << this->_name << "] : " << "I have no energy to repair myself!" << std::endl;
		return ;
	}
	this->_energy -= 1;
	this->_health += amount;
	std::cout << "ClapTrap [" << this->_name << "]" << " healed " << amount << " points of health!" << std::endl;
}

void	ClapTrap::displayInfo(void)
{
	std::cout << "[" << this->_name << "]" << std::endl;
	std::cout << "Health: " << this->_health << std::endl;
	std::cout << "Energy: " << this->_energy << std::endl;
	std::cout << "Attack damage: " << this->_ad << std::endl;
}

/*-------------------------------------------------------*/
