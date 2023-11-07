/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:40:46 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/07 15:49:42 by tsodre-p         ###   ########.fr       */
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
	int	_hitpoints;
	int	_energy;
	int	_ad;
public:
	ClapTrap();
	ClapTrap(ClapTrap const &copy);
	ClapTrap	&operator=(ClapTrap const &copy);
	~ClapTrap();
};

ClapTrap::ClapTrap()
{
}

ClapTrap::~ClapTrap()
{
}

#endif
