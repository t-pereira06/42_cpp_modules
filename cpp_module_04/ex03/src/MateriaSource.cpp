/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:00:38 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/15 12:03:34 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MateriaSource.hpp"

/* Orthodox Canonical Form */
MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->mat_array[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->mat_array[i])
			delete this->mat_array[i];
	}
}

MateriaSource::MateriaSource(MateriaSource const &copy)
{
	if (this != &copy)
	{
		for(int i = 0; i < 4; i++)
		{
			if (this->mat_array[i])
				delete this->mat_array[i];
			this->mat_array[i] = copy.mat_array[i]->clone();
		}
	}
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &copy)
{
	if (this != &copy)
	{
		for(int i = 0; i < 4; i++)
		{
			if (this->mat_array[i])
				delete this->mat_array[i];
			this->mat_array[i] = copy.mat_array[i]->clone();
		}
	}
	return (*this);
}
/*-------------------------------------*/

/*Member Functions*/

void MateriaSource::learnMateria(AMateria* materia)
{
	for(int i = 0; i < 4; i++)
	{
		if (!this->mat_array[i])
		{
			this->mat_array[i] = materia;
			std::cout << materia->getType() << " was learned!" << std::endl;
			return ;
		}
	}
	std::cout << "Can't learn more materias!" << std::endl;
}


AMateria* MateriaSource::createMateria(std::string const & type)
{
	for(int i = 0; i < 4; i++)
	{
		if (this->mat_array[i] && (this->mat_array[i]->getType() == type))
		{
			std::cout << this->mat_array[i]->getType() << " was created!" << std::endl;
			return (this->mat_array[i]->clone());
		}
	}
	std::cout << type << " still yet to learn!" << std::endl;
	return (NULL);
}
/*-------------------------------------*/
