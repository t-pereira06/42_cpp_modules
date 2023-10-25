/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:22:29 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/10/25 15:30:21 by tsodre-p         ###   ########.fr       */
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
Fixed	&Fixed::operator= (const Fixed &obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = obj.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}
