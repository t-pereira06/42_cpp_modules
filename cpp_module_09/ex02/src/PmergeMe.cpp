/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:26:54 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/12/27 09:45:27 by tsodre-p         ###   ########.fr       */
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
	sortVector(vector);

	clock_t end1 = clock();
	double elapsed_microseconds1 = static_cast<double>(end1 - start1) / CLOCKS_PER_SEC * 1000;

	std::cout << "After: ";
	for (std::vector<int>::iterator it = vector.begin(); it != vector.end(); it++)
			std::cout << *it << " ";
	std::cout << std::endl;

	clock_t start2 = clock();
	sortDeque(deque);

	clock_t end2 = clock();
	double elapsed_microseconds2 = static_cast<double>(end2 - start2) / CLOCKS_PER_SEC * 1000;
	std::cout << "Time to process a range of " << vector.size() << " elements with std::vector: " << " " << elapsed_microseconds1 << " us" << std::endl;
	std::cout << "Time to process a range of " << deque.size() << " elements with std::deque: " << " " << elapsed_microseconds2 << " us" << std::endl;
}

void	PmergeMe::sortVector(std::vector<int> &vector)
{
	if (vector.size() == 1)
		return ;
	int	mid = vector.size() / 2;

	std::vector<int> left = std::vector<int>(vector.begin(), vector.begin() + mid);
	std::vector<int> right = std::vector<int>(vector.begin() + mid, vector.end());
	sortVector(left);
	sortVector(right);
	mergeVector(left, right, vector);
}

void	PmergeMe::sortDeque(std::deque<int> &deque)
{
	if (deque.size() == 1)
		return ;
	int	mid = deque.size() / 2;

	std::deque<int> left = std::deque<int>(deque.begin(), deque.begin() + mid);
	std::deque<int> right = std::deque<int>(deque.begin() + mid, deque.end());
	sortDeque(left);
	sortDeque(right);
	mergeDeque(left, right, deque);
}

void	PmergeMe::mergeVector(std::vector<int> &left, std::vector<int>&right, std::vector<int> &vector)
{
	size_t l = 0;
	size_t r = 0;
	size_t v = 0;

	/* for (std::vector<int>::iterator it = left.begin(); it != left.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	for (std::vector<int>::iterator it = right.begin(); it != right.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl; */
	while (l < left.size() && r < right.size())
	{
		/* std::cout << "Left: " << left[l] << " Right: " << right[r] << std::endl; */
		if (left[l] < right[r])
		{
			vector[v] = left[l];
			v++;
			l++;
		}
		else
		{
			vector[v] = right[r];
			v++;
			r++;
		}
	}

	//if the number of elements is odd. if it is, then a number is left to put in the vector
	while (l < left.size())
	{
		vector[v] = left[l];
		v++;
		l++;
	}
	while (r < right.size())
	{
		vector[v] = right[r];
		v++;
		r++;
	}
}

void	PmergeMe::mergeDeque(std::deque<int> &left, std::deque<int>&right, std::deque<int> &deque)
{
	size_t l = 0;
	size_t r = 0;
	size_t d = 0;
	while (l < left.size() && r < right.size())
	{
		if (left[l] < right[r])
		{
			deque[d] = left[l];
			d++;
			l++;
		}
		else
		{
			deque[d] = right[r];
			d++;
			r++;
		}
	}

	//if the number of elements is odd. if it is, then a number is left to put in the deque
	while (l < left.size())
	{
		deque[d] = left[l];
		d++;
		l++;
	}
	while (r < right.size())
	{
		deque[d] = right[r];
		d++;
		r++;
	}
}
