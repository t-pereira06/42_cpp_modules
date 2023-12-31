/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:22:34 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/10/30 10:50:23 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string.h>
#include <locale.h>
#include <stdio.h>

class Fixed
{
	private:
		int	_value;
		static const int	_frac_bits = 8;
	public:
		Fixed();
		Fixed(Fixed const &obj);
		~Fixed();
		Fixed &operator= (const Fixed &obj);
		int	getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif


