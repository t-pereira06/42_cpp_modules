/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:22:29 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/02 16:02:01 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

/* Constructors*/

Fixed::Fixed() : _value(0)
{
}

Fixed::Fixed(const Fixed &copy)
{
	this->_value = copy._value;
}

Fixed::Fixed(const int number)
{
	this->_value = number * (1 << this->_frac_bits);
}

Fixed::Fixed(const float number)
{
	this->_value = number * (1 << this->_frac_bits);
}

Fixed::~Fixed()
{
}

/*---------------------------------------------------------*/

/*Member Functions*/

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

Fixed	&Fixed::min(Fixed &f1, Fixed &f2)
{
	std::cout << "min member function called" << std::endl;
	if (f1.toFloat() < f2.toFloat())
		return (f1);
	return (f2);
}

Fixed	const &Fixed::min(const Fixed &f1, const Fixed &f2)
{
	std::cout << "const min member function called" << std::endl;
	if (f1.toFloat() < f2.toFloat())
		return (f1);
	return (f2);
}

Fixed	&Fixed::max(Fixed &f1, Fixed &f2)
{
	std::cout << "max member function called" << std::endl;
	if (f1.toFloat() > f2.toFloat())
		return (f1);
	return (f2);
}

Fixed	const &Fixed::max(const Fixed &f1, const Fixed &f2)
{
	std::cout << "const max member function called" << std::endl;
	if (f1.toFloat() > f2.toFloat())
		return (f1);
	return (f2);
}

/*---------------------------------------------------------*/

/*Operators*/

Fixed	&Fixed::operator= (const Fixed &copy)
{
	if (this != &copy)
		this->_value = copy._value;
	return (*this);
}

bool	Fixed::operator> (const Fixed &copy) const
{
	if (this->toFloat() > copy.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator< (const Fixed &copy) const
{
	if (this->toFloat() < copy.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator>= (const Fixed &copy) const
{
	if (this->toFloat() >= copy.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator<= (const Fixed &copy) const
{
	if (this->toFloat() <= copy.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator== (const Fixed &copy) const
{
	if (this->toFloat() == copy.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator!= (const Fixed &copy) const
{
	if (this->toFloat() != copy.toFloat())
		return (true);
	return (false);
}

Fixed	Fixed::operator+ (const Fixed &copy)
{
	return (this->toFloat() + copy.toFloat());
}

Fixed	Fixed::operator- (const Fixed &copy)
{
	return (this->toFloat() - copy.toFloat());
}

Fixed	Fixed::operator* (const Fixed &copy)
{
	return (this->toFloat() * copy.toFloat());
}

Fixed	Fixed::operator/ (const Fixed &copy)
{
	return (this->toFloat() / copy.toFloat());
}

Fixed	Fixed::operator++ (void)
{
	this->_value++;
	return (*this);
}

Fixed	Fixed::operator++ (int)
{
	Fixed	copy(*this);
	this->_value++;
	return (copy);
}

Fixed	Fixed::operator-- (void)
{
	this->_value--;
	return (*this);
}

Fixed	Fixed::operator-- (int)
{
	Fixed	copy(*this);
	this->_value--;
	return (copy);
}

/*---------------------------------------------------------*/

/*Functions*/

std::ostream	&operator<<(std::ostream &output, const Fixed &copy)
{
	output << copy.toFloat();
	return (output);
}
