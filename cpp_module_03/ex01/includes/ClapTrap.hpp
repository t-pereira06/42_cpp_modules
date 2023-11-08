/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:40:46 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/08 14:13:28 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string.h>
#include <locale.h>
#include <stdio.h>
#include <cmath>

class ClapTrap
{
	private:
		std::string	_name;
		unsigned int	_health;
		unsigned int	_energy;
		unsigned int	_ad;
	public:
		/* Orthodox Canonical Form */
		ClapTrap();
		ClapTrap(ClapTrap const &copy);
		ClapTrap	&operator=(ClapTrap const &copy);
		~ClapTrap();
		/* ----------------------------------------- */
		ClapTrap(const std::string name);
		void displayInfo(void);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
