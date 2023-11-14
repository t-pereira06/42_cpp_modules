/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:24:36 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/14 11:15:09 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"

/* Orthodox Canonical Form */
AMateria::AMateria() : type("Default")
{
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called" << std::endl;
}

AMateria::AMateria(AMateria const &copy)
{
	std::cout << "AMateria copy constructor called" << std::endl;
	if (this != &copy)
	{
		this->type = copy.type;
	}
}

AMateria	&AMateria::operator=(AMateria const &copy)
{
	std::cout << "AMateria copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		this->type = copy.type;
	}
	return (*this);
}
/*-------------------------------------*/

/*Member Functions*/

std::string const &AMateria::getType() const
{
	return (this->type);
}

void	AMateria::use(ICharacter &target)
{
}
/*-------------------------------------*/
