/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:08:56 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/14 10:15:41 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include <string.h>
#include <locale.h>
#include <stdio.h>
#include <cmath>

class AMateria
{
	protected:
		std::string	type;
	public:
		/* Orthodox Canonical Form */
		AMateria();
		virtual ~AMateria();
		AMateria(AMateria const &copy);
		AMateria	&operator=(AMateria const &copy);
		/* ----------------------------------------- */
		AMateria(std::string const &type);
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
}

#endif
