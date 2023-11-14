/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:51:12 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/13 14:59:07 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string.h>
#include <locale.h>
#include <stdio.h>
#include <cmath>

class Brain
{
	private:
		std::string	ideas[100];
	public:
		/* Orthodox Canonical Form */
		Brain();
		~Brain();
		Brain(Brain const &copy);
		Brain	&operator=(Brain const &copy);
		/* ----------------------------------------- */
};

#endif
