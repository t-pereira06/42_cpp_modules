/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:44:03 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/12/06 10:06:08 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

/* Orthodox Canonical Form */
template <class T> Array<T>::Array() : size(0)
{
	this->array = new T[0];
}

template <class T> Array<T>::Array(Array const &copy) : size(copy.size)
{
	this->array = new T[this->size];
	for (int i = 0; i < this->size; i++)
		this->array[i] = copy.array[i];
}

template <class T> Array<T>	&Array<T>::operator=(Array const &copy)
{
	if (this != *copy)
	{
		delete this->array;
		this->array = new T[copy.size];
		this->size = copy.size;
		for (int i = 0; i < copy.size; i++)
			this->array[i] = copy.array[i];
	}
	return (*this);
}

template <class T> Array<T>::~Array()
{
	if (this->array)
		delete [] this->array;
}
/*-------------------------------------*/

template <class T> Array<T>::Array(unsigned int n) : size(n)
{
	this->array = new T[n];
}

template <class T> unsigned int	Array<T>::getSize() const
{
	return (this->size);
}

template <class T> T	&Array<T>::operator[](unsigned int index)
{
	if (index >= size)
		throw Array<T>::OutOfBoundsException();
	return (this->array[index]);
}

#endif
