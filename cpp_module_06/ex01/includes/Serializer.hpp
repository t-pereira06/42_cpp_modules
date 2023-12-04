/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 09:16:32 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/12/04 09:20:50 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <iostream>
#include <stdint.h>

struct Data
{
	int number;
	std::string string;
	char character;
	bool truth;
};

class Serializer
{
	private:
		/* Orthodox Canonical Form */
		Serializer();
		~Serializer();
		Serializer(Serializer const &copy);
		Serializer	&operator=(Serializer const &copy);
		/* ----------------------- */
	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif
