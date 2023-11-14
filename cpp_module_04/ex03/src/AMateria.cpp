/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:24:36 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/14 16:38:17 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"

/* Orthodox Canonical Form */
AMateria::AMateria() : type("Default")
{
}

AMateria::~AMateria()
{
}

AMateria::AMateria(AMateria const &copy)
{
	if (this != &copy)
	{
		this->type = copy.type;
	}
}

AMateria	&AMateria::operator=(AMateria const &copy)
{
	if (this != &copy)
	{
		this->type = copy.type;
	}
	return (*this);
}
/*-------------------------------------*/

/*Member Functions*/

AMateria::AMateria(std::string const &_type) : type(_type)
{
}

std::string const &AMateria::getType() const
{
	return (this->type);
}

void	AMateria::use(ICharacter &target)
{
	std::cout << "Attacked " << target.getName() << std::endl;
}
/*-------------------------------------*/
