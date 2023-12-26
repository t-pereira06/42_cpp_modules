/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:26:39 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/12/26 14:14:40 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <cmath>
#include <vector>
#include <deque>
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
		void	sortAlgorithm(std::vector<int> &vector);
		void	mergeVector(std::vector<int> &vec, int start, int end);
};

#endif
