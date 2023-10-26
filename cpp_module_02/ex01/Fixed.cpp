/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:22:29 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/10/26 16:58:01 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/**
 * @brief Default constructor for the class.
 *
 * This constructor initializes a object with a value of 0 and prints a message to the standard output
 * indicating that the default constructor has been called.
 */
Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

/**
 * @brief Copy constructor for the class.
 *
 * This copy constructor creates a new object by making a copy of an existing object.
 * It initializes the new object with the same value as the source object and prints a message to the
 * standard output to indicate that the copy constructor has been called.
 *
 * @param obj The source object from which to make a copy.
 */
Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_value = obj.getRawBits();
}

Fixed::Fixed(const int number)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = number * (1 << this->_frac_bits);
}

Fixed::Fixed(const float number)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = number * (1 << this->_frac_bits);
}

/**
 * @brief Destructor for the class.
 *
 * This destructor is responsible for cleaning up any resources held by a object.
 * In this case, it prints a message to the standard output to indicate that the destructor has been called.
 * Destructors are automatically called when an object goes out of scope or is explicitly deleted.
 */
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

/**
 * @brief Copy assignment operator for the class.
 *
 * This copy assignment operator is used to assign the value of an existing object to another object.
 * It copies the value from the source object to the target object, and then prints a message to the
 * standard output to indicate that the copy assignment operator has been called.
 *
 * @param obj The source object from which to copy the value.
 * @return A reference to the target object after the assignment.
 */
Fixed	&Fixed::operator= (const Fixed &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = fixed.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

int	Fixed::toInt(void) const
{
	return (this->_value / (1 << this->_frac_bits));
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(this->_value) / static_cast<float>(1 << this->_frac_bits));
}

std::ostream	&operator<<(std::ostream &output, const Fixed &fixed)
{
	output << fixed.toFloat();
	return (output);
}
