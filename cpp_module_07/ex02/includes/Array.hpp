/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:46:00 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/12/05 15:11:03 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include "Array.tpp"

template <class T> class Array
{
	private:
		T	*array;
		unsigned int	size;
	public:
		/* Orthodox Canonical Form */
		Array();
		~Array();
		Array(Array const &copy);
		Array	&operator=(Array const &copy);
		/* ----------------------------------------- */
		Array(unsigned int n);
		size_t	size() const;
		T	&operator[](unsigned int index);
		class	OutOfBounds : public std::exception
		{
			public:
				const char *what() const throw();
		};
};

#endif
