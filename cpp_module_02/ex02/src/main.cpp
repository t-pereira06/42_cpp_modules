/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:22:36 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/06 11:42:38 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

void	operations(Fixed a)
{
	std::cout << "Operations: " << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << std::endl;
	std::cout << "a + 2 = ";
	std::cout << a + 2 << std::endl;

	std::cout << "a - 2 = ";
	std::cout << a - 2 << std::endl;

	std::cout << "a * 2 = ";
	std::cout << a * 2 << std::endl;

	std::cout << "a / 2 = ";
	std::cout << a / 2 << std::endl;

	std::cout << std::endl;
	std::cout << "++a = ";
	std::cout << ++a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << std::endl;

	std::cout << "a++ = ";
	std::cout << a++ << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << std::endl;

	std::cout << "--a = ";
	std::cout << --a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << std::endl;

	std::cout << "a-- = ";
	std::cout << a-- << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << std::endl;

}

void	comparisons(Fixed a, Fixed b)
{
	std::cout << "Comparisons: " << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << std::endl;
	std::cout << "a > b: ";
	if (a > b)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;

	std::cout << "a < b: ";
	if (a < b)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;

	std::cout << "a >= b: ";
	if (a >= b)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;

	std::cout << "a <= b: ";
	if (a <= b)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;

	std::cout << "a == b: ";
	if (a == b)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;

	std::cout << "a != b: ";
	if (a != b)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;
}

int	main (void)
{
	Fixed	a(10);
	Fixed	b(20);

	comparisons(a, b);
	std::cout << std::endl;
	operations(a);
}
