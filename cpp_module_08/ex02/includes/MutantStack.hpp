/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 15:33:52 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/12/14 16:38:01 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <iterator>
#include <iostream>
#include <list>

template <typename T> class MutantStack : public std::stack<T>
{
	public:
		/* Orthodox Canonical Form */
		MutantStack();
		~MutantStack();
		MutantStack(MutantStack const &copy);
		MutantStack	&operator=(MutantStack const &copy);
		/* ----------------------- */

		/* Member Functions */
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin(void);
		iterator end(void);

		/* ----------------------- */
};

#include "MutantStack.tpp"

#endif
