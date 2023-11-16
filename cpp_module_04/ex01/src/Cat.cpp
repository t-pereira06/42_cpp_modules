/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:44:12 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/16 09:45:31 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

/*Orthodox Canonical Form*/
Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
	this->brain = new Brain();
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(Cat const &copy) : Animal(copy)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->brain = new Brain(*copy.brain);
}

Cat	&Cat::operator=(Cat const &copy)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		this->type = copy.type;
		this->brain = new Brain(*copy.brain);
	}
	return (*this);
}
/*-------------------------------------*/

void	Cat::makeSound() const
{
	std::cout << "Miau" << std::endl;
}

Brain*	Cat::getBrain()
{
	return (this->brain);
}
