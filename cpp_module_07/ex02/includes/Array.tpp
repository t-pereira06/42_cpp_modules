/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:44:03 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/12/05 15:37:19 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

template <class T> Array<T>::Array() : size(0)
{
	this->array = new T[0];
}

template <class T> Array<T>::Array(unsigned int n) : size(0)
{
	this->array = new T[n];
}

template <class T> Array<T>::Array(Array const &copy)
{
	if (this != *copy)
	{
		this->array = new T[this->size];
		for (int i; i < this->)
	}
}

#endif
