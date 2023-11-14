/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:22:56 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/14 16:52:47 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"
#include "../includes/Cure.hpp"
#include "../includes/Ice.hpp"
#include "../includes/MateriaSource.hpp"
#include "../includes/AMateria.hpp"

int main()
{
	ICharacter* cracked = new Character("Cracked");
	ICharacter* bob = new Character("Bob");

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	AMateria* tmp;
	tmp = src->createMateria("ice");
	cracked->equip(tmp);
	tmp = src->createMateria("cure");
	cracked->equip(tmp);
	tmp = src->createMateria("cure");
	cracked->equip(tmp);

	cracked->use(2, *bob);
	cracked->use(0, *bob);
	cracked->use(1, *bob);
	delete bob;
	delete cracked;
	delete src;
	return 0;
}
