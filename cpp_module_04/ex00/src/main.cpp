/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:44:05 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/13 12:02:53 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

int main()
{
	{
		std::cout << "Using static polymorphism" << std::endl;
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << std::endl;
		std::cout << "Names:"<< std::endl;
		std::cout << std::endl;
		std::cout << "Animal's name: " << meta->getType() << " " << std::endl;
		std::cout << "Dog's name: " << j->getType() << " " << std::endl;
		std::cout << "Cat's name: " << i->getType() << " " << std::endl;
		std::cout << std::endl;
		std::cout << "Sounds:"<< std::endl;
		std::cout << std::endl;
		std::cout << "Animal's name: ";
		meta->makeSound();
		std::cout << "Dog's name: ";
		j->makeSound();
		std::cout << "Cat's name: ";
		i->makeSound();

	}
	std::cout << std::endl;
	std::cout << "-------------------------------------------------------" << std::endl;
	{
		std::cout << "Using dynamic polymorphism" << std::endl;
		const WrongAnimal* meta = new WrongAnimal();
		const Animal* j = new Dog();
		const WrongAnimal* i = new WrongCat();
		std::cout << std::endl;
		std::cout << "Names:"<< std::endl;
		std::cout << std::endl;
		std::cout << "Animal's name: " << meta->getType() << " " << std::endl;
		std::cout << "Dog's name: " << j->getType() << " " << std::endl;
		std::cout << "Cat's name: " << i->getType() << " " << std::endl;
		std::cout << std::endl;
		std::cout << "Sounds:"<< std::endl;
		std::cout << std::endl;
		std::cout << "Animal's name: ";
		meta->makeSound();
		std::cout << "Dog's name: ";
		j->makeSound();
		std::cout << "Cat's name: ";
		i->makeSound();
	}
	return 0;
}
