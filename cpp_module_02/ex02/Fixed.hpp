/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:22:34 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/10/31 11:33:37 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string.h>
#include <locale.h>
#include <stdio.h>
#include <cmath>

class Fixed
{
	private:
		int	_value;
		static const int	_frac_bits = 8;
	public:
		/*Constructors*/

		Fixed();
		Fixed(Fixed const &copy);
		Fixed(const int number);
		Fixed(const float number);
		~Fixed();

		/*Member Functions*/

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		int		toInt(void) const;
		float	toFloat(void) const;
		static Fixed	&min(Fixed &f1, Fixed &f2);
		static Fixed	const &min(const Fixed &f1, const Fixed &f2);
		static Fixed	&max(Fixed &f1, Fixed &f2);
		static Fixed	const &max(const Fixed &f1, const Fixed &f2);

		/*Operators*/

		Fixed	&operator= (const Fixed &copy);
		bool	operator> (const Fixed &copy) const;
		bool	operator< (const Fixed &copy) const;
		bool	operator>= (const Fixed &copy) const;
		bool	operator<= (const Fixed &copy) const;
		bool	operator== (const Fixed &copy) const;
		bool	operator!= (const Fixed &copy) const;

		Fixed	operator+ (const Fixed &copy);
		Fixed	operator- (const Fixed &copy);
		Fixed	operator* (const Fixed &copy);
		Fixed	operator/ (const Fixed &copy);

		Fixed	operator++(void);
		Fixed	operator++(int);
		Fixed	operator--(void);
		Fixed	operator--(int);
};

std::ostream	&operator<<(std::ostream &os, const Fixed &fixed);

#endif


