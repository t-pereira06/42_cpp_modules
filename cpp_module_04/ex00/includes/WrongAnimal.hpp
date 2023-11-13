/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:43:36 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/13 12:56:44 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string.h>
#include <locale.h>
#include <stdio.h>
#include <cmath>

class WrongAnimal
{
	protected:
		std::string	type;
	public:
		/* Orthodox Canonical Form */
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal(WrongAnimal const &copy);
		WrongAnimal	&operator=(WrongAnimal const &copy);
		/* ----------------------------------------- */
		WrongAnimal(std::string _type);
		void	makeSound() const;
		std::string	getType() const;
};

#endif
