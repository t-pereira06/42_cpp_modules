/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:28:36 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/12/18 09:26:48 by tsodre-p         ###   ########.fr       */
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
		class ContainerFullException : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return ("Vector is full!");
				}
		};
		class LowStoredNumbersException : public std::exception
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
