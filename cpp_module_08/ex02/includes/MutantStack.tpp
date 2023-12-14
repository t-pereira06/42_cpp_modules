/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 15:33:50 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/12/14 15:55:34 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP

#include "MutantStack.hpp"

/* Orthodox Canonical Form */
template <typename T> MutantStack<T>::MutantStack() {}

template <typename T> MutantStack<T>::MutantStack(MutantStack const &copy)
{
	(void)copy;
}

template <typename T> MutantStack<T>	&MutantStack<T>::operator=(MutantStack const &copy)
{
	(void)copy;
	return (*this);
}

template <typename T> MutantStack<T>::~MutantStack() {}
/*-------------------------------------*/

/*Member Functions*/
template <typename T> typename MutantStack<T>::iterator	MutantStack<T>::begin(void)
{
	return (this->c.begin());
}

template <typename T> typename MutantStack<T>::iterator	MutantStack<T>::end(void)
{
	return (this->c.end());
}
/*-------------------------------------*/

#endif
