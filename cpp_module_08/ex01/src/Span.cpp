/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:29:00 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/12/14 15:22:56 by tsodre-p         ###   ########.fr       */
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

/*Constructors*/
Span::Span(unsigned int number) : N(number){}
/* ----------------------------------------------------------- */

/*Member Functions*/

void	Span::addNumber(int number)
{
	if (this->vector.size() >= this->N)
		throw ContainerFullException();
	this->vector.push_back(number);
}

unsigned int	Span::shortestSpan()
{
	if (this->N < 2)
		throw LowStoredNumbersException();
	unsigned int	shortestDistance;
	std::vector<int> sortedVector = this->vector;
	std::sort(sortedVector.begin(), sortedVector.end());
	shortestDistance = sortedVector[1] - sortedVector[0];
	for (size_t i = 1; i < sortedVector.size() - 1; i++)
	{
		unsigned int	result = sortedVector[i + 1] - sortedVector[i];
		shortestDistance = std::min(shortestDistance, result);
	}
	return (shortestDistance);
}

unsigned int	Span::longestSpan()
{
	if (this->N < 2)
		throw LowStoredNumbersException();
	std::vector<int> sortedVector = this->vector;
	std::sort(sortedVector.begin(), sortedVector.end());
	unsigned int	minValue = *(std::min_element(this->vector.begin(), this->vector.end()));
	unsigned int	maxValue = *(std::max_element(this->vector.begin(), this->vector.end()));
	return (maxValue - minValue);
}

void	Span::printVector()
{
	std::cout << "[ ";
	for (std::vector<int>::iterator ptr = this->vector.begin(); ptr != this->vector.end(); ptr++)
		std::cout << *ptr << ", ";
	std::cout << "]" << std::endl;
}

void	Span::generateRandomNumbers(int nNumbers)
{
	std::srand(std::time(NULL));
	std::vector<int> randomNumbers;
	for (int i = 0; i < nNumbers; i++)
		randomNumbers.push_back(rand());
	if (this->vector.size() + randomNumbers.size() > this->N)
		throw ContainerFullException();
	this->vector.insert(this->vector.end(), randomNumbers.begin(), randomNumbers.end());
}
/* ----------------------------------------------------------- */
