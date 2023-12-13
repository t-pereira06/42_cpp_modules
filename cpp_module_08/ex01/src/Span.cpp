/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:29:00 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/12/13 16:41:32 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

/* Orthodox Canonical Form */
Span::Span() : N(0){}

Span::~Span() {}

Span::Span(Span const &copy) : N(copy.N), vector(copy.vector) {}

Span	&Span::operator=(Span const &copy)
{
	if (this != &copy)
	{
		this->vector.clear();
		this->N = copy.N;
		this->vector = copy.vector;
	}
	return (*this);
}
/* ----------------------------------------------------------- */

/*Member Functions*/
Span::Span(unsigned int number) : N(number){}

/* ----------------------------------------------------------- */
void	Span::addNumber(int number)
{
	if (this->vector.size() >= this->N)
		throw ContainerFullException();
	this->vector.push_back(number);
}

/* int	Span::shortestSpan()
{
	if (this->N < 2)
		throw LowStoredNumbersException();
} */

int	Span::longestSpan()
{
	if (this->N < 2)
		throw LowStoredNumbersException();
	std::vector<int> sortedVector = this->vector;
	std::sort(sortedVector.begin(), sortedVector.end());
	return (sortedVector.back() - sortedVector.front());
}

void	Span::printVector()
{
	std::cout << "[ ";
	for (std::vector<int>::iterator ptr = this->vector.begin(); ptr != this->vector.end(); ptr++)
	{
		std::cout << *ptr;
		std::cout << ", ";
	}
	std::cout << "]" << std::endl;
}
