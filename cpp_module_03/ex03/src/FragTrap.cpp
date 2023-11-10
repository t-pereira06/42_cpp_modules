/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:24:14 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/10 11:27:08 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

/*Orthodox Canonical Form*/
FragTrap::FragTrap() : ClapTrap("Default")
{
	std::cout << "FragTrap " << this->_name << " was created" << std::endl;
	this->_name = "Default";
	this->_health = 100;
	this->_energy = 100;
	this->_ad = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->_name << " was destroyed!" << std::endl;
}

FragTrap::FragTrap(FragTrap const &copy) : ClapTrap(copy)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &copy)
{
	std::cout << "FragTrap copy assigment operator called" << std::endl;
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
FragTrap::FragTrap(const std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap " << this->_name << " was created" << std::endl;
	this->_name = name;
	this->_health = 100;
	this->_energy = 100;
	this->_ad = 30;
}
/*-------------------------------------------------------*/

/*Member Functions*/

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->_name << " is giving high fives to everyoneeee!." << std::endl;
}
