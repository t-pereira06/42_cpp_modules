/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:28:36 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/12/14 15:17:26 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <algorithm>
#include <iostream>
#include <vector>
#include <list>
#include <iterator>
#include <ctime>

class Span
{
	private:
		unsigned int N;
		std::vector<int> vector;
	public:
		/* Orthodox Canonical Form */
		Span();
		~Span();
		Span(Span const &copy);
		Span	&operator=(Span const &copy);
		/* ----------------------- */

		/* Constructors */
		Span(unsigned int number);
		/* ----------------------- */

		/* Member Functions */
		void	addNumber(int number);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
		void	printVector();
		void	generateRandomNumbers(int nNumbers);
		class ContainerFullException : std::exception
		{
			public:
				const char *what() const throw()
				{
					return ("Vector is full!");
				}
		};
		class LowStoredNumbersException : std::exception
		{
			public:
				const char *what() const throw()
				{
					return ("Not enough numbers stored!");
				}
		};
		/* ----------------------- */
};

#endif
