/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:40:42 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/08 11:29:17 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

/* Orthodox Canonical Form */
ClapTrap::ClapTrap() : _name("Default"), _health(10), _energy(10), _ad(0)
{
	std::cout << "Default constructor called";
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called";
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
	std::cout << "Copy constructor called";
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
	std::cout << "Copy assigment operator called";
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
	std::cout << "Constructor called";
}

/*-------------------------------------------------------*/

/*Member Functions*/

void	ClapTrap::attack(const std::string& target)
{
	if (this->_energy == 0)
	{
		std::cout << "ClapTrap " << this->_name << " ran out of energy. What a shame..." << std::endl;
		return ;
	}
	if (this->_health == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is already dead. How do you want to attack?" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_ad << " points of damage!" << std::endl;
	this->_energy -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_health == 0)
	{
		std::cout << "I'm already dead and you still want to attack me?";
		return ;
	}
	if ((this->_health - amount) <= 0)
	{
		this->_health == 0;
		std::cout << "Wow, what a powerful attack! Claptrap " << this->_name << " is dead.";
		return ;
	}
	this->_health -= amount;
	std::cout << "ClapTrap " << this->_name << " took " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_health == 0)
	{
		std::cout << "Wish they could repair dead ClapTraps... I'm dead mate!";
		return ;
	}
	if (this->_energy == 0)
	{
		std::cout << "I have no energy to repair myself!";
		return ;
	}
	this->_energy -= 1;
	this->_health += amount;
	std::cout << "ClapTrap " << this->_name << " healed " << amount << " points of health!" << std::endl
}

/*-------------------------------------------------------*/
