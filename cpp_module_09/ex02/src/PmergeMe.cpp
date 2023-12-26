/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:26:54 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/12/26 14:53:58 by tsodre-p         ###   ########.fr       */
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

PmergeMe::PmergeMe(std::vector<int> _vector) : vector(_vector), deque(_vector.begin(), _vector.end())
{
	sortAlgorithm(this->vector, this->deque);
}

void	PmergeMe::sortAlgorithm(std::vector<int> &vector, std::deque<int> &deque)
{
	std::cout << "Before: ";
	for (std::vector<int>::iterator it = vector.begin(); it != vector.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;

	clock_t start1 = clock();
	mergeVector(vector, 0, vector.size() - 1);

	clock_t end1 = clock();
	double elapsed_microseconds1 = static_cast<double>(end1 - start1) / CLOCKS_PER_SEC * 1000;

	std::cout << "After: ";
	for (std::vector<int>::iterator it = vector.begin(); it != vector.end(); it++)
			std::cout << *it << " ";
	std::cout << std::endl;

	clock_t start2 = clock();
	mergeDeque(deque, 0, deque.size() - 1);

	clock_t end2 = clock();
	double elapsed_microseconds2 = static_cast<double>(end2 - start2) / CLOCKS_PER_SEC * 1000;
	std::cout << "Time to process a range of " << vector.size() << " elements with std::vector: " << " " << elapsed_microseconds1 << " us" << std::endl;
	std::cout << "Time to process a range of " << deque.size() << " elements with std::vector: " << " " << elapsed_microseconds2 << " us" << std::endl;
}

void	PmergeMe::mergeVector(std::vector<int> &vector, int start, int end)
{
	if (start < end)
	{
		int	mid = (start + end) / 2;
		mergeVector(vector, start, mid);
		mergeVector(vector, mid + 1, end);
		for (std::vector<int>::iterator it = vector.begin(); it != vector.end(); it++)
		std::cout << *it << " ";
		std::cout << std::endl;
		std::inplace_merge(vector.begin() + start, vector.begin() + mid + 1, vector.begin() + end + 1);
	}
}

void	PmergeMe::mergeDeque(std::deque<int> &deque, int start, int end)
{
	if (start < end)
	{
		int	mid = (start + end) / 2;
		mergeDeque(deque, start, mid);
		mergeDeque(deque, mid + 1, end);
		std::inplace_merge(deque.begin() + start, deque.begin() + mid + 1, deque.begin() + end + 1);
	}
}
