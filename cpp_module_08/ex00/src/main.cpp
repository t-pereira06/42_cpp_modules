/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:09:47 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/12/13 15:22:38 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/easyfind.hpp"

int	main (void)
{
	{
		std::cout << "USING LIST" << std::endl;
		std::cout << std::endl;
		std::list<int>	list;

		list.push_back(99);
		list.push_back(32);
		list.push_back(46);
		list.push_back(90);
		list.push_back(22);
		list.pop_back();

		std::cout << "List: [ ";
		for (std::list<int>::iterator ptr = list.begin(); ptr != list.end(); ptr++)
		{
			std::cout << *ptr;
			std::cout << ", ";
		}
		std::cout << "]" << std::endl;

		std::cout << std::endl;
		std::cout << "Trying to find 55: ";
		easyfind(list, 55);
		std::cout << "Trying to find 99: ";
		easyfind(list, 99);
		std::cout << "Trying to find 2: ";
		easyfind(list, 2);
		std::cout << "Trying to find 90: ";
		easyfind(list, 90);
	}
	std::cout << std::endl;
	std::cout << "-----------------------------------------------------------";
	std::cout << std::endl;
	std::cout << std::endl;
	{
		std::cout << "USING VECTOR" << std::endl;
		std::cout << std::endl;
		std::vector<int>	vector;

		vector.push_back(37);
		vector.push_back(11);
		vector.push_back(87);
		vector.push_back(44);
		vector.push_back(9);

		std::cout << "Vector: [ ";
		for (std::vector<int>::iterator ptr = vector.begin(); ptr != vector.end(); ptr++)
		{
			std::cout << *ptr;
			std::cout << ", ";
		}
		std::cout << "]" << std::endl;

		std::cout << std::endl;
		std::cout << "Trying to find 55: ";
		easyfind(vector, 55);
		std::cout << "Trying to find 37: ";
		easyfind(vector, 37);
		std::cout << "Trying to find 2: ";
		easyfind(vector, 2);
		std::cout << "Trying to find 44: ";
		easyfind(vector, 44);
	}
	return 0;
}
