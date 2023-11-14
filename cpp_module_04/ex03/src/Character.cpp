/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:00:05 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/14 16:35:07 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"

/* Orthodox Canonical Form */
Character::Character() : name("Default")
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	for (int i = 0; i < 10; i++)
		this->floor[i] = NULL;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		delete this->inventory[i];
	for (int i = 0; i < 10; i++)
		this->floor[i] = NULL;
}

Character::Character(Character const &copy)
{
	if (this != &copy)
	{
		this->name = copy.name;
		for(int i = 0; i < 4; i++)
		{
			if (this->inventory[i])
				delete this->inventory[i];
			this->inventory[i] = copy.inventory[i];
		}
		for(int i = 0; i < 10; i++)
		{
			if (this->floor[i])
				delete this->floor[i];
			this->floor[i] = copy.floor[i];
		}
	}
}

Character	&Character::operator=(Character const &copy)
{
	if (this != &copy)
	{
		this->name = copy.name;
		for(int i = 0; i < 4; i++)
		{
			if (this->inventory[i])
				delete inventory[i];
			this->inventory[i] = copy.inventory[i];
		}
		for(int i = 0; i < 10; i++)
		{
			if (this->floor[i])
				delete this->floor[i];
			this->floor[i] = copy.floor[i];
		}
	}
	return (*this);
}
/*-------------------------------------*/

/*Member Functions*/

Character::Character(std::string _name) : name(_name)
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

void	Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->inventory[i])
		{
			this->inventory[i] = m;
			return ;
		}
	}
	std::cout << "Inventory is full!" << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		std::cout << "Unequipping outside of the inventory range!" << std::endl;
	if (!this->inventory[idx])
		std::cout << "No materia on slot " << idx << "!" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		if (!this->floor[i])
		{
			this->floor[i] = this->inventory[idx];
			std::cout << this->inventory[idx]->getType() << " went to the floor!" << std::endl;
			delete this->inventory[idx];
			return ;
		}
	}
	std::cout << "Floor is full of materia!" << std::endl;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
		std::cout << "Trying to use a materia outside the inventory range!" << std::endl;
	if (!this->inventory[idx])
		std::cout << this->name << " does not have materia in that slot!" << std::endl;
	this->inventory[idx]->use(target);
}

std::string const &Character::getName() const
{
	return (this->name);
}
/*-------------------------------------*/
