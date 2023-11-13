/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:45:00 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/13 11:35:44 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string.h>
#include <locale.h>
#include <stdio.h>
#include <cmath>

class Animal
{
	protected:
		std::string	type;
	public:
		/* Orthodox Canonical Form */
		Animal();
		~Animal();
		Animal(Animal const &copy);
		Animal	&operator=(Animal const &copy);
		/* ----------------------------------------- */
		Animal(std::string _type);
		virtual void	makeSound() const;
		std::string	getType() const;
};

#endif
