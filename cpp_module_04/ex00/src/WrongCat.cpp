/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:51:06 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/13 11:52:03 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

/*Orthodox Canonical Form*/
WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called";
}

WrongCat::WrongCat(WrongCat const &copy) : WrongAnimal(copy)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat	&WrongCat::operator=(WrongCat const &copy)
{
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		this->type = copy.type;
	}
	return (*this);
}
/*-------------------------------------*/

void	WrongCat::makeSound() const
{
	std::cout << "Miau" << std::endl;
}
