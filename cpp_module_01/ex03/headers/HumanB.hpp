/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 09:27:02 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/10/20 09:43:38 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string.h>
#include <locale.h>
#include <stdio.h>
#include <iomanip>
#include "Weapon.hpp"

class HumanB
{
	private:
		Weapon	weapon;
		std::string	_name;
	public:
		HumanB(std::string name);
		void	attack();
		void	setWeapon(Weapon);
};

#endif
