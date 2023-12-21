/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:26:39 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/12/21 14:36:56 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <cmath>
#include <vector>
#include <list>
#include <stdio.h>
#include <string.h>

class PmergeMe
{
	private:
		std::vector<int> vector;
		std::list<int> list;
	public:
		/* Orthodox Canonical Form */
		PmergeMe();
		~PmergeMe();
		PmergeMe(PmergeMe const &copy);
		PmergeMe	&operator=(PmergeMe const &copy);
		/* ----------------------- */
};

#endif
