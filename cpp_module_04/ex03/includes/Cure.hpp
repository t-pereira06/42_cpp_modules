/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:05:11 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/14 11:12:09 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp";

class Cure : public AMateria
{
	public:
		/* Orthodox Canonical Form */
		Cure();
		virtual ~Cure();
		Cure(Cure const &copy);
		Cure	&operator=(Cure const &copy);
		/* ----------------------------------------- */
		AMateria*	clone() const;
		void	use(ICharacter &target);
};

#endif
