/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:22:36 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/02 15:42:10 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

/* int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
} */

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
