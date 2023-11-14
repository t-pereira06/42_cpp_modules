/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:19:58 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/14 10:22:50 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		/* Orthodox Canonical Form */
		Ice();
		virtual ~Ice();
		Ice(Ice const &copy);
		Ice	&operator=(Ice const &copy);
		/* ----------------------------------------- */
		AMateria*	clone();
		void	use(ICharacter &target);
}

#endif
