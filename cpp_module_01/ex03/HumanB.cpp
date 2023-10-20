/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 09:26:52 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/10/20 12:48:01 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
}

HumanB::~HumanB()
{
}

void	HumanB::attack()
{
	if (_weapon)
		std::cout << this->_name << "attacks with their" << this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon* weapon)
{
	this->_weapon = weapon;
}
