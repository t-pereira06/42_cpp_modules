/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:33:18 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/15 11:10:21 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character	: public ICharacter
{
	private:
		std::string	name;
		AMateria *inventory[4];
		AMateria *floor[10];
	public:
		/* Orthodox Canonical Form */
		Character();
		virtual ~Character();
		Character(Character const &copy);
		Character	&operator=(Character const &copy);
		/* ----------------------------------------- */
		Character(std::string _name);
		std::string const &getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		std::string get_inv_type(int value);
		std::string get_floor_type(int value);
};

#endif
