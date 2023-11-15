/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:22:56 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/15 12:41:32 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"
#include "../includes/Cure.hpp"
#include "../includes/Ice.hpp"
#include "../includes/MateriaSource.hpp"
#include "../includes/AMateria.hpp"

void	print_inv_floor(ICharacter *cracked)
{
	std::cout << "Inventory :" << std::endl;
	std::cout << "[ ";
	Character	*characterptr = (Character *)cracked;
	for (int i = 0; i < 3; i++)
	{
		std::cout << characterptr->get_inv_type(i);
		std::cout << " | ";
	}
	std::cout << characterptr->get_inv_type(3);
	std::cout << " ]";
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Cracked's Floor :" << std::endl;
	std::cout << "[ ";
	for (int i = 0; i < 9; i++)
	{
		std::cout << characterptr->get_floor_type(i);
		std::cout << " | ";
	}
	std::cout << characterptr->get_floor_type(9);
	std::cout << " ]";
	std::cout << std::endl;
	std::cout << std::endl;
}

int main()
{
	ICharacter* cracked = new Character("Cracked");
	ICharacter* bob = new Character("Bob");

	std::cout << "Learning materia :" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	std::cout << std::endl;

	std::cout << "Creating materia :" << std::endl;
	AMateria* m1;
	AMateria* m2;
	AMateria* m3;
	m1 = src->createMateria("cure");
	m2 = src->createMateria("ice");
	m3 = src->createMateria("ice");
	std::cout << std::endl;

	cracked->equip(m1);
	cracked->equip(m2);
	cracked->equip(m3);

	std::cout << "Cracked's ";
	print_inv_floor(cracked);

	cracked->use(0, *bob);
	cracked->use(1, *bob);
	std::cout << std::endl;

	std::cout << "Unequipping slot 0..." << std::endl;
	cracked->unequip(0);
	std::cout << std::endl;

	std::cout << "Cracked's ";
	print_inv_floor(cracked);

	std::cout << "Unequipping slot 0..." << std::endl;
	cracked->unequip(1);
	std::cout << std::endl;

	std::cout << "Cracked's ";
	print_inv_floor(cracked);
	delete m1;
	delete m2;
	delete bob;
	delete cracked;
	delete src;
	return 0;
}
