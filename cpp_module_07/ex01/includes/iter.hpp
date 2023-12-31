/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 09:25:30 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/12/05 15:04:27 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T> void print(T a)
{
	std::cout << a << ", ";
}

template <typename T> void decrement(T a)
{
	a--;
	::print(a);
}

template <typename T> void iter(T *array, size_t lenght, void (*func)(T))
{
	for (size_t i = 0; i < lenght; i++)
		func(array[i]);
}

#endif
