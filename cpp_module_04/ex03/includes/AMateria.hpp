/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:08:56 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/14 16:36:14 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

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
		std::string const	&getType() const;
		virtual AMateria*	clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
