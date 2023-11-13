/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:44:05 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/13 15:27:40 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"

int main()
{
	{
		Animal *array[4];

		for (int i = 0; i < 2; i++)
			array[i] = new Dog();
		for (int i = 2; i < 4; i++)
			array[i] = new Cat();
		std::cout << std::endl;
		for(int i = 0; i < 4; i++)
		{
			std::cout << "Type of animal: " << array[i]->getType() << std::endl;
			std::cout << "Animal address: " << array[i] << std::endl;
			Dog*	dogptr = (Dog *)array[i];
			std::cout << "Brain address: " << dogptr->getBrain() << std::endl;
			std::cout << std::endl;
		}

		for(int i = 0; i < 4; i++)
			delete array[i];
	}
	return 0;
}
