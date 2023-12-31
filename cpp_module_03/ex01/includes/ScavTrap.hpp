/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:35:25 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/10 14:06:17 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "../includes/ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		/* Orthodox Canonical Form */
		ScavTrap();
		ScavTrap(ScavTrap const &copy);
		ScavTrap	&operator=(ScavTrap const &copy);
		~ScavTrap();
		/* ----------------------------------------- */
		ScavTrap(const std::string name);
		void attack(const std::string& target);
		void guardGate();
};

#endif
