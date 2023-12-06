/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:49:41 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/12/06 11:06:07 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Array.hpp"
#include "../includes/Array.tpp"

int	main(void)
{
	try
	{
		std::cout << "ARRAYS OF INT" << std::endl;
		Array<int>	a(10);
		Array<int>	b(4);
		Array<int>	c(a);
		Array<int>	d;

		d = b;

		//fill array a
		for (int i = 0; i < 10; i++)
			a[i] = i + 1;
		//fill array b
		for (int i = 0; i < 4; i++)
			b[i] = i + 1;
		//fill array c
		for (int i = 0; i < 10; i++)
			c[i] = i + 1;
		//fill array d
		for (int i = 0; i < 4; i++)
			d[i] = i + 1;

		//print array a
		std::cout << "Using constructor: " << std::endl;
		std::cout << "Array A: ";
		for (int i = 0; i < 10; i++)
			std::cout << a[i] << " | ";
		std::cout << std::endl;
		std::cout << std::endl;
		//print array b
		std::cout << "Using constructor: " << std::endl;
		std::cout << "Array B: ";
		for (int i = 0; i < 4; i++)
			std::cout << b[i] << " | ";
		std::cout << std::endl;
		std::cout << std::endl;
		//print array c
		std::cout << "Using copy constructor (c(a)): " << std::endl;
		std::cout << "Array C: ";
		for (int i = 0; i < 10; i++)
			std::cout << c[i] << " | ";
		std::cout << std::endl;
		std::cout << std::endl;
		//print array d
		std::cout << "Using copy assignement operator (d = b): " << std::endl;
		std::cout << "Array D: ";
		for (int i = 0; i < 4; i++)
			std::cout << d[i] << " | ";
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	try
	{
		std::cout << "ARRAYS OF CHAR" << std::endl;
		Array<char>	a(10);
		Array<char>	b(4);
		Array<char>	c(a);
		Array<char>	d;

		d = b;

		//fill array a
		for (int i = 0; i < 10; i++)
			a[i] = 'A' + i;
		//fill array b
		for (int i = 0; i < 4; i++)
			b[i] = 'A' + i;
		//fill array c
		for (int i = 0; i < 10; i++)
			c[i] = 'A' + i;
		//fill array d
		for (int i = 0; i < 4; i++)
			d[i] = 'A' + i;

		//print array a
		std::cout << "Using constructor: " << std::endl;
		std::cout << "Array A: ";
		for (int i = 0; i < 10; i++)
			std::cout << a[i] << " | ";
		std::cout << std::endl;
		std::cout << std::endl;
		//print array b
		std::cout << "Using constructor: " << std::endl;
		std::cout << "Array B: ";
		for (int i = 0; i < 4; i++)
			std::cout << b[i] << " | ";
		std::cout << std::endl;
		std::cout << std::endl;
		//print array c
		std::cout << "Using copy constructor (c(a)): " << std::endl;
		std::cout << "Array C: ";
		for (int i = 0; i < 10; i++)
			std::cout << c[i] << " | ";
		std::cout << std::endl;
		std::cout << std::endl;
		//print array d
		std::cout << "Using copy assignement operator (d = b): " << std::endl;
		std::cout << "Array D: ";
		for (int i = 0; i < 4; i++)
			std::cout << d[i] << " | ";
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
