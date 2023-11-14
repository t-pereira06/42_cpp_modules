/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:43:00 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/14 10:00:44 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

/* Orthodox Canonical Form */
Animal::Animal() : type("Default")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(Animal const &copy)
{
	std::cout << "Animal copy constructor called" << std::endl;
	if (this != &copy)
	{
		this->type = copy.type;
	}
}

Animal	&Animal::operator=(Animal const &copy)
{
	std::cout << "Animal copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		this->type = copy.type;
	}
	return (*this);
}
/*-------------------------------------*/

Animal::Animal(std::string _type) : type(_type)
{
	std::cout << "Animal constructor called" << std::endl;
}

std::string	Animal::getType() const
{
	return(type);
}
