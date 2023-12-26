/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:26:39 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/12/26 15:39:04 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <cmath>
#include <vector>
#include <deque>
#include <list>
#include <iterator>
#include <algorithm>
#include <ctime>

class PmergeMe
{
	private:
		std::vector<int> vector;
		std::deque<int> deque;
	public:
		/* Orthodox Canonical Form */
		PmergeMe();
		~PmergeMe();
		PmergeMe(PmergeMe const &copy);
		PmergeMe	&operator=(PmergeMe const &copy);
		/* ----------------------- */
		PmergeMe(std::vector<int> vector);
		void	sortAlgorithm(std::vector<int> &vector, std::deque<int> &deque);
		void	sortVector(std::vector<int> &vec);
		void	sortDeque(std::deque<int> &deque);
		void	mergeVector(std::vector<int> &left, std::vector<int>&right, std::vector<int> &vector);
		void	mergeDeque(std::deque<int> &left, std::deque<int>&right, std::deque<int> &deque);
};

#endif
