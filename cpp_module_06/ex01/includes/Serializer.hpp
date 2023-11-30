/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 09:16:32 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/30 09:46:07 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <iostream>
#include <stdint.h>

struct Data
{
	int	number;
};

class Serializer
{
	public:
		/* Orthodox Canonical Form */
		Serializer();
		~Serializer();
		Serializer(Serializer const &copy);
		Serializer	&operator=(Serializer const &copy);
		/* ----------------------- */
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif