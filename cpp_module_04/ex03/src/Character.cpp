/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:00:05 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/14 12:42:57 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"

/* Orthodox Canonical Form */
Character::Character() : name("Default")
{
	std::cout << "Character default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		delete this->inventory[i];
}

Character::Character(Character const &copy)
{
	std::cout << "Character copy constructor called" << std::endl;
	if (this != &copy)
	{
		this->name = copy.name;
		for(int i = 0; i < 4; i++)
		{
			if (this->inventory[i])
				delete inventory[i];
			this->inventory[i] = copy.inventory[i];
		}
	}
}

Character	&Character::operator=(Character const &copy)
{
	std::cout << "Character copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		this->name = copy.name;
		for(int i = 0; i < 4; i++)
		{
			if (this->inventory[i])
				delete inventory[i];
			this->inventory[i] = copy.inventory[i];
		}
	}
	return (*this);
}
/*-------------------------------------*/

/*Member Functions*/

Character::Character(std::string _name) : name(_name)
{
	std::cout << "Character constructor called" << std::endl;
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
	std::cout << "Inventory is full!";
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		std::cout << "Nnequipping outside of the inventory range!" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		if (!this->floor[i])
		{
			this->floor[i] = this->inventory[idx];
			delete this->inventory[idx];
			return;
		}
	}
	std::cout << "Floor is full of materia!";
}

void	use(int idx, ICharacter& target);



std::string const &Character::getName() const
{
	return (this->name);
}
/*-------------------------------------*/
