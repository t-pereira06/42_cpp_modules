/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:04:39 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/10/24 13:06:33 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string.h>
#include <locale.h>
#include <stdio.h>
#include <iomanip>
#include <stdlib.h>

class Zombie
{
private:
	std::string	name;
public:
	~Zombie();
	void 	announce( void );
	void	setZombieName(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif
