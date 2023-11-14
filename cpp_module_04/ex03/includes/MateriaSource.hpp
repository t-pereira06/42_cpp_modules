/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:48:49 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/14 15:06:54 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *mat_array[4];
	public:
		/* Orthodox Canonical Form */
		MateriaSource();
		virtual ~MateriaSource();
		MateriaSource(MateriaSource const &copy);
		MateriaSource	&operator=(MateriaSource const &copy);
		/* ----------------------------------------- */
		void learnMateria(AMateria* materia);
		AMateria* createMateria(std::string const & type);
};

#endif
