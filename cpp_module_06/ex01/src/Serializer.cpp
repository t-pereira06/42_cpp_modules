/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 09:16:30 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/12/04 10:23:47 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serializer.hpp"

/* Orthodox Canonical Form */
Serializer::Serializer() {}

Serializer::~Serializer() {}

Serializer::Serializer(Serializer const &copy)
{
	(void)copy;
}

Serializer	&Serializer::operator=(Serializer const &copy)
{
	(void)copy;
	return (*this);
}
/* ---------------------------------------------------- */

/* Member Functions */

uintptr_t	Serializer::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}
