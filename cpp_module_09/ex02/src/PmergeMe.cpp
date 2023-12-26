/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:26:54 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/12/26 12:50:18 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PmergeMe.hpp"

/* Orthodox Canonical Form */
PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(PmergeMe const &copy) : vector(copy.vector), deque(copy.deque) {}

PmergeMe	&PmergeMe::operator=(PmergeMe const &copy)
{
	if (this != &copy)
	{
		this->vector = copy.vector;
		this->deque = copy.deque;
	}
	return (*this);
}
/* ----------------------------------------------------------- */

PmergeMe::PmergeMe(std::vector<int> _vector) : vector(_vector), deque(vector.begin(), vector.end())
{
	sortAlgorithm(_vector);
}

void	PmergeMe::sortAlgorithm(std::vector<int> vector)
{
	std::cout << "Before: ";
	for (std::vector<int>::iterator it = vector.begin(); it != vector.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	/* clock_t start = clock(); */
	mergeVector(vector, 0, vector.size() - 1);
	std::cout << "After: ";
	for (std::vector<int>::iterator it = vector.begin(); it != vector.end(); it++)
			std::cout << *it << " ";
	std::cout << std::endl;
}

void	PmergeMe::mergeVector(std::vector<int> &vec, int start, int end)
{
	if (start < end)
	{
		int	mid = (start + end) / 2;
		mergeVector(vec, start, mid);
		mergeVector(vec, mid + 1, end);
		std::inplace_merge(vec.begin() + start, vec.begin() + mid + 1, vec.begin() + end + 1);
	}
}
