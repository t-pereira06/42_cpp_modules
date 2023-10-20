/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 09:27:06 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/10/20 09:44:17 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <string.h>
#include <locale.h>
#include <stdio.h>
#include <iomanip>
#include "Weapon.hpp"

class HumanA
{
	private:
		Weapon	weapon;
		std::string	_name;
	public:
		HumanA(std::string name, Weapon);
		void	attack();
};

#endif
