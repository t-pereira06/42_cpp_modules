/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:22:29 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/10/30 16:11:04 by tsodre-p         ###   ########.fr       */
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
Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_value = copy._value;
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
Fixed	&Fixed::operator= (const Fixed &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy)
		this->_value = copy._value;
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

/**
 * @brief Convert the Fixed-point value to an integer representation.
 *
 * This member function converts the Fixed-point value to an integer
 * representation by dividing the internal fixed-point representation by 2
 * raised to the power of the fractional bits. It truncates any fractional
 * portion and returns the result as an integer.
 *
 * @return The equivalent integer representation of the Fixed-point value.
 */
int	Fixed::toInt(void) const
{
	return (this->_value / (1 << this->_frac_bits));
}

/**
 * @brief Convert the Fixed-point value to a floating-point representation.
 *
 * This member function converts the Fixed-point value to a floating-point
 * representation by dividing the internal fixed-point representation by
 * 2 raised to the power of the fractional bits. It returns the result as a
 * floating-point value.
 *
 * @return The equivalent floating-point representation of the Fixed-point value.
 */
float	Fixed::toFloat(void) const
{
	return (static_cast<float>(this->_value) / static_cast<float>(1 << this->_frac_bits));
}

/**
 * @brief Output stream operator for the Fixed class.
 *
 * This operator allows you to output the value of a Fixed object to a standard
 * output stream, such as std::cout. It converts the Fixed object to a floating-
 * point value using the Fixed::toFloat() method and then sends this value to
 * the output stream.
 *
 * @param output The output stream to which the Fixed object's value is written.
 * @param fixed The Fixed object to be written to the output stream.
 *
 * @return A reference to the output stream to allow for chaining multiple output
 *         operations.
 */
std::ostream	&operator<<(std::ostream &output, const Fixed &copy)
{
	output << copy.toFloat();
	return (output);
}
