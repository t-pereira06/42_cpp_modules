/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:44:46 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/13 12:06:30 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

/* Orthodox Canonical Form */
WrongAnimal::WrongAnimal() : type("Default")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	if (this != &copy)
	{
		this->type = copy.type;
	}
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &copy)
{
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		this->type = copy.type;
	}
	return (*this);
}
/*-------------------------------------*/

WrongAnimal::WrongAnimal(std::string _type) : type(_type)
{
	std::cout << "WrongAnimal constructor called" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return(type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Roarh Miau Catchau" << std::endl;
}
