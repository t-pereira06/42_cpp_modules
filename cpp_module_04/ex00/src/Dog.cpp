/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:44:08 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/13 12:37:32 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

/*Orthodox Canonical Form*/
Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(Dog const &copy) : Animal(copy)
{
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog	&Dog::operator=(Dog const &copy)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		this->type = copy.type;
	}
	return (*this);
}
/*-------------------------------------*/

void	Dog::makeSound() const
{
	std::cout << "Bark" << std::endl;
}
